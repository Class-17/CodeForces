#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 48;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    ll g[maxn + 1] = {0LL};
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        g[a] |= 1LL << b;
        g[b] |= 1LL << a;
    }
    vector<vector<int>> ans[4];
    ll memo = 0;
    for (int i = 1; i <= n; ++i) {
        if (memo & (1LL << i)) continue;
        vector<int> curr;
        auto dfs = [&](auto &dfs, int v)->void {
            memo |= 1LL << v;
            curr.push_back(v);
            for (int i = 1; i <= n; ++i)
                if (!(memo & (1LL << i)) && (g[v] & (1LL << i))) dfs(dfs, i);
        };
        dfs(dfs, i);
        if (size(curr) > 3) {cout << -1 << '\n'; return 0;}
        ans[size(curr)].push_back(curr);
    }
    int one = size(ans[1]), two = size(ans[2]);
    if (two > one || (one - two) % 3) {cout << -1 << '\n'; return 0;}
    for (auto &seq : ans[3]) for (int i = 0; i < 3; ++i)
        cout << seq[i] << (i < 2 ? ' ' : '\n');
    for (int i = 0; i < two; ++i)
        cout << ans[1][i][0] << ' ' << ans[2][i][0] << ' ' << ans[2][i][1] << '\n';
    for (int i = two; i < one; ++i)
        cout << ans[1][i][0] << ((i - two + 1) % 3 ? ' ' : '\n');
    return 0;
}