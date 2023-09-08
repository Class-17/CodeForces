#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    vector<int> p(n);
    for (auto &x : p) cin >> x;
    vector<vector<int>> res(n);
    for (int i = 0; i < n; ++i)
        res[i] = vector<int>(i + 1);
    for (int i = 0; i < n; ++i) {
        int cnt = p[i], j = i;
        for (int r = i; r < n and cnt > 0; ++r) {
            while (j >= 0 and cnt > 0 and !res[r][j]) {
                res[r][j] = p[i];
                --j;
                --cnt;
            }
            j = j + 1;
        }
    }
    for (int i = 0; i < n; ++i)
        for (int j = 0; j <= i; ++j)
            cout << res[i][j] << " \n"[i == j];
    return 0;
}