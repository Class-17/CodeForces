#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

int solve() {
    int n; std::cin >> n;
    std::vector grid(n, std::vector(n, 0));
    for (auto &row : grid)
        for (auto &x : row)
            std::cin >> x;
    std::map<int, int> mp;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (grid[i][j] < 0)
                mp[i - j] = std::max(mp[i - j], -grid[i][j]);
    i64 res = 0;
    for (auto &[k, v] : mp)
        res += v;
    std::cout << res << '\n';
    return 0;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) solve();
    return 0;
}