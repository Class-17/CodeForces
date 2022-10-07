#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s, t;
    cin >> n >> s >> t;
    vector<int> p(n + 1), seq(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> p[i];
    iota(begin(seq), end(seq), 0);
    auto check = [&]() {
        int moves = 0, curr = s;
        while (seq[curr] != t) {
            curr = p[curr];
            if (seq[curr] == s) return -1;
            moves++;
        }
        return moves;
    };
    cout << check() << '\n';
    return 0;
}