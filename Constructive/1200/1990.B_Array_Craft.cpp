#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) {
        int n, x, y;
        std::cin >> n >> x >> y;
        std::vector<int> res(n + 2);
        for (int i = y; i <= x; ++i)
            res[i] = 1;
        res[y - 1] = res[x + 1] = -1;
        for (int i = y - 2; i >= 1; --i)
            res[i] = res[i + 1] * -1;
        for (int i = x + 2; i <= n; ++i)
            res[i] = res[i - 1] * -1;
        for (int i = 1; i <= n; ++i)
            std::cout << res[i] << " \n"[i == n];
    }
    return 0;
}