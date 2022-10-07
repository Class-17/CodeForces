#include <bits/stdc++.h>
using namespace std;

constexpr int MAXN = 1e6;

void sieve(unordered_set<int> &primes) {
    bool is_prime[MAXN + 1];
    fill(is_prime, is_prime + MAXN + 1, true);
    for (int i = 2; i <= MAXN; ++i) {
        if (!is_prime[i]) continue;
        primes.insert(i);
        for (int j = i * 2; j <= MAXN; j += i) 
            is_prime[j] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_set<int> primes;
    sieve(primes);
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        long long x; cin >> x;
        auto t = sqrt(x);
        if (int(t) != t || primes.find(int(t)) == primes.end())
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}