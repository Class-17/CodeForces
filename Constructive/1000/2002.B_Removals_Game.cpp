#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) {
        int n; std::cin >> n;
        std::vector<int> a(n), b(n);
        for (auto &x : a) std::cin >> x;
        for (auto &x : b) std::cin >> x;
        auto c = b;
        std::ranges::reverse(c);
        std::cout << (a != b and a != c ? "Alice" : "Bob") << '\n';
    }
    return 0;
}