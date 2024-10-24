#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

int solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<i64> a(n);
    for (auto &x : a) std::cin >> x;
    std::ranges::sort(a);
    std::adjacent_difference(a.begin(), a.end(), a.begin());
    i64 res = 0;
    for (int i = 0; i < n; ++i) {
        i64 minus = std::min(i64(k), (n - i) * a[i]);
        res += minus;
        k -= minus;
        if (k > 0) res += 1;
        else       break;
    }
    std::cout << res << '\n';
    return 0;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) solve();
    return 0;
}