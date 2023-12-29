#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        map<int, int> lo, hi;
        for (auto &x : arr)
            ++hi[x];
        i64 res = 0, left = 0;
        for (auto &[k, v] : hi)
            if (v == 1) ++res;
        for (auto &x : arr) {
            if (hi[x] == 1)
                res += left;
            --hi[x];
            if (lo.count(x) == 0)
                ++left;
            ++lo[x];
        }
        cout << res << '\n';
    }
    return 0;
}