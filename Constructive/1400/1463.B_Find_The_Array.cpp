#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<i64> a(n);
        for (auto &x : a) cin >> x;
        i64 s = accumulate(begin(a), end(a), 0LL);
        i64 s1 = 0;
        for (int i = 0; i < n; i += 2)
            s1 += a[i] - 1;
        if (s1 * 2 <= s) {
            for (int i = 0; i < n; ++i)
                cout << ((i & 1) ? a[i] : 1) << " \n"[i + 1 == n];
        }
        else {
            for (int i = 0; i < n; ++i)
                cout << ((i & 1) ? 1 : a[i]) << " \n"[i + 1 == n];
        }
    }
    return 0;
}