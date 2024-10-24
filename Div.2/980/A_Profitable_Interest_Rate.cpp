#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

int solve() {
    int a, b;
    std::cin >> a >> b;
    int c = b - a;
    if (a > b)
        std::cout << a << '\n';
    else 
        std::cout << std::max(0, a - b + a) << '\n';
    return 0;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) solve();
    return 0;
}