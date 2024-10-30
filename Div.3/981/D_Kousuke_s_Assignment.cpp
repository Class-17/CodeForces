#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

int solve() {
    int n; std::cin >> n;
    std::vector<int> a(n);
    for (auto &x : a) std::cin >> x;
    std::partial_sum(a.begin(), a.end(), a.begin());
    std::map<int, int> cnt;
    cnt[0] = -1;
    int res = 0, last = -1;
    for (int i = 0; i < n; ++i) {
        if (cnt.count(a[i]) and cnt[a[i]] >= last) {
            res += 1;
            last = i;
        }
        cnt[a[i]] = i;
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