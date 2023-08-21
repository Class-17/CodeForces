#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        map<int, int> st;
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; ++i) {
            int k; cin >> k;
            for (int j = 0; j < k; ++j) {
                int p; cin >> p;
                arr[i].push_back(p);
                ++st[p];
            }
        }
        auto check = [&]() {
            for (int i = 0; i < n; ++i) {
                bool passed = true;
                for (auto &q : arr[i])
                    if (st[q] == 1) {
                        passed = false;
                        break;
                    }
                if (passed) return true;
            }
            return false;
        };
        cout << (check() ? "Yes" : "No") << '\n';
    }
    return 0;
}