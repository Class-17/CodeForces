#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

int solve() {
    int n; std::cin >> n;
    std::vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i)
        std::cin >> p[i];
    std::vector<int> vis(n + 1);
    int res = 0;
    for (int i = 1; i <= n; ++i) {
        if (vis[i]) continue;
        int j = p[i], cnt = 1;
        while (j != i) {
            vis[j] = 1;
            cnt += 1;
            j = p[j];        
        }
        if (cnt > 2) res += cnt - 1 >> 1;
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