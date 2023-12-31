#include <bits/stdc++.h>
using namespace std;

constexpr int dirs[][2] {0, 1, 1, 0, 0, -1, -1, 0};

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (auto &x : grid) cin >> x;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            vector<int> st(n * m);
            st[i*m+j] = 1;
            auto dfs = [&](auto &dfs, int r, int c)->void {
                for (auto &[dr, dc] : dirs) {
                    int nr = r + dr, nc = c + dc;
                    if (nr < 0 or nr >= n or nc < 0 or nc >= m) continue;
                    if (grid[nr][nc] != grid[r][c]) continue;
                    if (st[nr*m+nc] == 0) {
                        st[nr*m+nc] = st[r*m+c] + 1;
                        dfs(dfs, nr, nc);
                    }
                    else if (st[r*m+c] - st[nr*m+nc] >= 3) {
                        cout << "Yes" << '\n';
                        exit(0);
                    }
                }  
            };
            dfs(dfs, i, j);
        }
    cout << "No" << '\n';
	return 0;
}