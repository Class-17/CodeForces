#include <bits/stdc++.h>
using namespace std;

constexpr int max_val = 2e5;

void sieve(vector<int> &primes) {
    bitset<max_val + 1> p;
    for (int i = 2; i <= max_val; ++i) {
        if (p[i]) continue;
        primes.push_back(i);
        for (int j = i + i; j <= max_val; j += i)
            p[j] = true;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> primes;
    sieve(primes);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (auto &row : mat) for (auto &x : row) cin >> x;
    int moves = INT_MAX;
    for (int i = 0; i < n; ++i) {
        int curr = 0;
        for (int j = 0; j < m; ++j)
            curr += *lower_bound(begin(primes), end(primes), mat[i][j]) - mat[i][j];
        moves = min(curr, moves);
    }
    for (int i = 0; i < m; ++i) {
        int curr = 0;
        for (int j = 0; j < n; ++j)
            curr += *lower_bound(begin(primes), end(primes), mat[j][i]) - mat[j][i];
        moves = min(curr, moves);
    }
    cout << moves << '\n';
    return 0;
}