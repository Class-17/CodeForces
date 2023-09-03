#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<pair<int, int>> es(n - 1);
        vector<vector<pair<int, int>>> g(n);
        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            --u, --v;
            g[u].emplace_back(v, i);
            g[v].emplace_back(u, i);
        }
        bool prime = true;
        for (auto &adj : g)
            if (size(adj) > 2) {
                prime = false;
                break;
            }
        if (prime == false) {
            cout << -1 << '\n';
            continue;
        }
        int w[2] = {2, 3};
        vector<int> res(n - 1);
        int cnt = 0;
        auto dfs = [&](auto &f, int pa, int u, int i)->void {
            for (auto &[v, idx] : g[u]) {
                if (v == pa) continue;
                res[idx] = w[i];
                i ^= 1;
                f(f, u, v, i);
            }
        };
        dfs(dfs, 0, 0, 0);
        for (int i = 0; i < n - 1; ++i)
            cout << res[i] << " \n"[i + 1 == n - 1];
    }
    return 0;
}