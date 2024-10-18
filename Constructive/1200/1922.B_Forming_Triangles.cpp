#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

int solve() {
    int n; std::cin >> n;
    std::vector<int> a(n);
    for (auto &x : a) std::cin >> x;
    std::ranges::sort(a);
    i64 res = 0;
    for (int i = 0; i < n; ++i) {
        int j = i + 1;
        while (j < n and a[j] == a[i]) ++j;
        i64 cnt = j - i;
        res += i * (cnt - 1) * cnt / 2;
        if (cnt >= 3)
            res += (cnt - 2) * (cnt - 1) * cnt / 6;
        i = j - 1;
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