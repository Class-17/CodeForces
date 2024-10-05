#include <bits/stdc++.h>
#include <execution>
int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) {
        int n; std::cin >> n;
        std::vector<int> k(n);
        for (auto &x : k) std::cin >> x;
        int tot = std::accumulate(k.begin(), k.end(), 1, std::lcm<int, int>);
        int sum = std::accumulate(k.begin(), k.end(), 0, [&](const auto &a, const auto &b) {
            return a + tot / b;});
        if (sum < tot)
            for (int i = 0; i < n; ++i)
                std::cout << tot / k[i] << " \n"[i + 1 == n];
        else
            std::cout << -1 << '\n';
    }
    return 0;
}