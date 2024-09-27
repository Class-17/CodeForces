#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        int v = 0;
        for (int i = 1; i <= n - 3; ++i) {
            v ^= i;
            cout << i << ' ';
        }
        cout << (1 << 23) << ' ' << (1 << 24) << ' ';
        cout << (v ^ 1 << 23 ^ 1 << 24) << '\n';
    }
    return 0;
}