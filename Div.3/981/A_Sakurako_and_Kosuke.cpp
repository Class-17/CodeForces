#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

int solve() {
    int n; std::cin >> n;
    int x = 0,i = 1;
    while (-n <= x and x <= n) {
        if (i & 1)
            x -= i * 2 - 1;
        else
            x += i * 2 - 1;
        i += 1;
    }
    std::cout << (i % 2 == 0 ? "Sakurako" : "Kosuke") << '\n';
    return 0;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) solve();
    return 0;
}