#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) {
        int n, m;
        std::cin >> n >> m;
        std::vector<std::string> a(n), b(n);
        for (auto &row : a) std::cin >> row;
        for (auto &row : b) std::cin >> row;
        auto check = [&]() {
            for (int i = 0; i < n; ++i) {
                int sa = 0, sb = 0;
                for (int j = 0; j < m; ++j) {
                    sa += a[i][j] - '0';
                    sb += b[i][j] - '0';
                }
                if (sa % 3 != sb % 3) return false;
            }
            for (int j = 0; j < m; ++j) {
                int sa = 0, sb = 0;
                for (int i = 0; i < n; ++i) {
                    sa += a[i][j] - '0';
                    sb += b[i][j] - '0';
                }
                if (sa % 3 != sb % 3) return false;
            }
            return true;
        };
        std::cout << (check() ? "YES" : "NO") << '\n';
    }
    return 0;
}