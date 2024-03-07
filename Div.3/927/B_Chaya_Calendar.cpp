#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        int res = 0;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            res = res / x * x + x;
        }
        cout << res << '\n';
    }
    return 0;
}