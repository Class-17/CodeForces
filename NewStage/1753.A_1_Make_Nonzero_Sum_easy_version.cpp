#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        if (n & 1) {
            cout << -1 << '\n';
            continue;
        }
        vector<pair<int, int>> res;
        for (int i = 0; i < n; i += 2) {
            if (arr[i] == arr[i + 1]) {
                res.emplace_back(i, i + 1);
            }
            else {
                res.emplace_back(i, i);
                res.emplace_back(i + 1, i + 1);
            }
        }
        cout << size(res) << '\n';
        for (auto &[a, b] : res)
            cout << a + 1 << ' ' << b + 1 << '\n';
    }
    return 0;
}