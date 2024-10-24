#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

constexpr int MOD = 1e9 + 7;
// constexpr int N = 

int solve() {
    int n; std::cin >> n;
    std::vector<i64> f(n + 1);
    f[1] = f[2] = 1;
    for (int i = 3; i <= n; ++i)
        f[i] = f[i - 1] + f[i - 2];
    // for (int i = 2; i <= 10; ++i) {
    //     std::cout << i << ": ";
    //     for (int j = 1; j <= n; ++j)
    //         if (f[j] % i == 0) std::cout << j << ' ';
    //     std::cout << '\n';
    // }
    for (int i = 1; i <= n; ++i)
        std::cout << f[i] << " \n"[i == n];
    return 0;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) solve();
    return 0;
}