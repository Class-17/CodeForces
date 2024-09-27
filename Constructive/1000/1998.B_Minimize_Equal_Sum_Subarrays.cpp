#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) {
        int n; std::cin >> n;
        std::vector<int> a(n);
        for (auto &x : a) std::cin >> x;
        std::rotate(a.begin(), a.begin() + 1, a.end());
        for (auto &x : a) std::cout << x << " ";
        std::cout << '\n';
    }
    return 0;
}