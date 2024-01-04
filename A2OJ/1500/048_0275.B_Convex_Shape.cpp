#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (auto &x : grid) cin >> x;
    auto row = [&](int r, int i, int j) {
        if (i > j) swap(i, j);
        for (int c = i; c <= j; ++c)
            if (grid[r][c] == 'W') return false;
        return true;
    };
    auto col = [&](int c, int i, int j) {
        if (i > j) swap(i, j);
        for (int r = i; r <= j; ++r)
            if (grid[r][c] == 'W') return false;
        return true;
    };
    vector<pair<int, int>> seq;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (grid[i][j] == 'B')
                seq.emplace_back(i, j);
    for (int i = 0; i < size(seq); ++i)
        for (int j = i + 1; j < size(seq); ++j) {
            auto &[r1, c1] = seq[i];
            auto &[r2, c2] = seq[j];
            bool hi = row(r1, c1, c2) and col(c2, r1, r2);
            bool lo = row(r2, c1, c2) and col(c1, r1, r2);
            if (hi == false and lo == false) {
                cout << "NO" << '\n';
                return 0;
            }
        }
    cout << "YES" << '\n'; 
    return 0;
}