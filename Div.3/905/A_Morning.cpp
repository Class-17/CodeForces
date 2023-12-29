#include <bits/stdc++.h>
using namespace std;

constexpr int p[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int idx = 1;
        string s; cin >> s;
        int res = 0;
        for (auto &c : s) {
            res += abs(p[c-'0'] - p[idx]);
            idx = c - '0';
        }
        cout << res + 4 << '\n';
    }
    return 0;
}