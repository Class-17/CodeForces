#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<i64> arr(n);
        for (auto &x : arr) cin >> x;
        sort(begin(arr), end(arr));
        i64 res = 0, prev = 0;
        for (int i = 1; i < n; ++i) {
            res += prev - (arr[i] - arr[i - 1]) * (i - 1);
            prev = prev - (arr[i] - arr[i - 1]) * i;
        }
        cout << res << '\n';
    }
    return 0;
}