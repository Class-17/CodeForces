#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) {
        int n; std::cin >> n;
        int prev = 1000;
        std::cout << prev;
        for (int i = 2; i <= n; ++i) {
            int x; std::cin >> x;
            prev += x;
            std::cout << " " << prev;
        }
        std::cout << "\n";
    }
    return 0;
}