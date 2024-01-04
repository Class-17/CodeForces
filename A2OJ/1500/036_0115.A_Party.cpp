#include <bits/stdc++.h>
using namespace std;

constexpr int N = 2000;

vector<int> g[N+1];

int dfs(int fa, int u) {
    int curr = 0;
    for (auto &v : g[u])
        if (v != fa)
            curr = max(curr, dfs(u, v));
    return curr + 1;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    vector<int> st(n + 1);
    for (int i = 1; i <= n; ++i) {
        int j; cin >> j;
        if (j == -1) continue;
        g[j].push_back(i);
        st[i] = 1;
    }
    int res = 1;
    for (int i = 1; i <= n; ++i)
        if (st[i] == 0)
            res = max(res, dfs(i, i));
    cout << res << '\n';
    return 0;
}