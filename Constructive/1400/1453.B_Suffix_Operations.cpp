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
        i64 tot = 0;
        for (int i = 1; i < n; ++i)
            tot += abs(arr[i] - arr[i-1]);
        int minus = max(abs(arr[1] - arr[0]), abs(arr[n-1] - arr[n-2]));
        for (int i = 1; i + 1 < n; ++i) {
            int l = abs(arr[i-1] - arr[i]);
            int r = abs(arr[i+1] - arr[i]);
            int m = abs(arr[i-1] - arr[i+1]);
            minus = max(minus, l + r - m);
        }
        cout << tot - minus << '\n';
    }
    return 0;
}