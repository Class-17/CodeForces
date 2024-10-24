#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

int solve() {
    int n; std::cin >> n;
    std::vector<std::pair<int, int>> a(n);
    for (auto &[x, y] : a)
        std::cin >> x >> y;
    std::ranges::sort(a, [](const auto &x, const auto &y) {
        return x.first + x.second < y.first + y.second;
    });
    for (auto &[x, y] : a)
        std::cout << x << ' ' << y << ' ';
    std::cout << '\n';
    return 0;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) solve();
    return 0;
}