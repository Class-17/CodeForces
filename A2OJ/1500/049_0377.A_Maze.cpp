#include <bits/stdc++.h>
using namespace std;

constexpr int dirs[][2] {0, 1, 1, 0, 0, -1, -1, 0};

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n, m, k;
    cin >> n >> m >> k;
    vector<string> grid(n);
    for (auto &row : grid) cin >> row;
    int s = 0;
    for (auto &row : grid)
        s += count(begin(row), end(row), '.');
    auto dfs = [&](auto &dfs, int r, int c)->void {
        if (s > k) grid[r][c] = '_';
        else       grid[r][c] = 'X';
        s -= 1;
        for (auto &[dr, dc] : dirs) {
            int nr = r + dr, nc = c + dc;
            if (nr < 0 or nr >= n or nc < 0 or nc >= m) continue;
            if (grid[nr][nc] != '.') continue;
            dfs(dfs, nr, nc);
        }
    };
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (grid[i][j] == '.')
                dfs(dfs, i, j);
    for (auto &row : grid) {
        for (auto &ch : row)
            if (ch == '_') ch = '.';
        cout << row << '\n';
    }  
	return 0;
}