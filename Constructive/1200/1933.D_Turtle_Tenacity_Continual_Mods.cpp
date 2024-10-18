#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

int solve() {
    int n; std::cin >> n;
    std::vector<int> a(n);
    for (auto &x : a) std::cin >> x;
    std::ranges::sort(a);
    bool res = a[0] != a[1];
    if (a[0] == a[1]) {
        for (int i = 2; i < n; ++i)
            if (a[i] % a[0] > 0)
                res = true;
    }
    std::cout << (res ? "YES" : "NO") << '\n';
    return 0;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) solve();
    return 0;
}