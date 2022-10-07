#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 1e3;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    bitset<maxn + 1> memo;
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        memo[a] = memo[b] = 1; 
    }
    int p = 0;
    for (int i = 1; i <= n && !p; ++i)
        if (!memo[i]) p = i;
    cout << n - 1 << '\n';
    for (int i = 1; i <= n; ++i)
        if (i != p) cout << i << ' ' << p << '\n';
    return 0;
}