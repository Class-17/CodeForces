#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;


int solve() {
    int n; std::cin >> n;
    std::vector<int> a(n);
    for (auto &x : a) std::cin >> x;
    int res = 0;
    for (int i = 0; i + 1 < n; ++i)
        if (a[i] == a[i + 1]) res += 1;
    int
    std::cout << res << '\n';
    return 0;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) solve();
    return 0;
}