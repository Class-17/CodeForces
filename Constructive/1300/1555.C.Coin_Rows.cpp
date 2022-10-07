#include <bits/stdc++.h>
using namespace std;

constexpr int n = 2;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int m; cin >> m;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> mat[i][j];
        for (int i = 0; i < n; ++i)
            for (int j = 1; j < m; ++j)
                mat[i][j] += mat[i][j - 1];
        int res = INT_MAX;
        for (int i = 0; i < m; ++i) {
            int l = i > 0 ? mat[1][i - 1] : 0;
            int r = i < m ? mat[0][m - 1] - mat[0][i]: 0;
            res = min(res, max(l, r));
        }
        cout << res << '\n';
    }
    return 0;
}