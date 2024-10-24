#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

using PII = std::pair<i64, int>;

int solve() {
    int n; std::cin >> n;
    std::vector<int> a(n), b(n);
    for (auto &x : a) std::cin >> x;
    for (auto &x : b) std::cin >> x, --x;
    std::vector<i64> dist(n, i64(1e18));
    std::priority_queue<PII, std::vector<PII>, std::greater<>> pq;
    pq.emplace(0, 0);
    dist[0] = 0;
    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (dist[u] < d) continue;
        int v = u;
        while (v >= 0 and dist[v] >= d) {
            dist[v] = d;
            if (d + a[v] < dist[b[v]]) {
                dist[b[v]] = d + a[v];
                pq.emplace(d + a[v], b[v]);
            }
            v -= 1;
        }
    }
    i64 res = 0, sum = 0;;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
        res = std::max(res, sum - dist[i]);
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