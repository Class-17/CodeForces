#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        int p = min_element(begin(arr), end(arr)) - begin(arr);
        cout << n - 1 << '\n';
        for (int i = 0; i < n; ++i) {
            if (i == p) continue;
            cout << i + 1 << ' ' << p + 1 << ' ' << arr[p] + abs(p - i) << ' ' << arr[p] << '\n';
        }
    }
    return 0;
}