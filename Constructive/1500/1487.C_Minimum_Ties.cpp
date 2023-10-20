#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> row(n), col(n), res;
        for (int i = 0; i < n; ++i) {
            int j = i + 1;
            if (n % 2 == 0 and i % 2 == 0) {
                res.push_back(0);
                ++j;
            }
            while (j < n) {
                if (row[i] < (n - 1) / 2 and col[j] < (n - 1)  / 2) {
                    ++row[i];
                    ++col[j];
                    res.push_back(1);
                }
                else {
                    res.push_back(-1);
                }
                ++j;
            }
        }
        int m = size(res);
        for (int i = 0; i < m; ++i)
            cout << res[i] << " \n"[i + 1 == m];
    }
    return 0;
}