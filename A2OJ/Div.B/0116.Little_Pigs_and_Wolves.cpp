#include <bits/stdc++.h>
using namespace std;

constexpr int dirs[][2] = {0, 1, 1, 0, 0, -1, -1, 0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> mat(n);
    for (auto &line : mat) cin >> line;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            if (mat[i][j] != 'P') continue;
            auto check = [&](int x, int y) {
                for (auto &[dx, dy] : dirs) {
                    int nx = x + dx, ny = y + dy;
                    if (nx < 0 || ny < 0 || nx >= n || ny >= m || mat[nx][ny] != 'W') continue;
                    mat[x][y] = mat[nx][ny] = '.';
                    return true;
                }
                return false;
            };
            cnt += check(i, j);
        }
    cout << cnt << '\n';
    return 0;
}