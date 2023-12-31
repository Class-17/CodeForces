#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 1e3 * 8;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int dp[maxn + 1];
    memset(dp, -1, sizeof dp);
    dp[0] = 0;
    for (int w = 0; w <= n; ++w) {
        if (dp[w] == -1) continue;
        dp[w + a] = max(dp[w + a], dp[w] + 1);
        dp[w + b] = max(dp[w + b], dp[w] + 1);
        dp[w + c] = max(dp[w + c], dp[w] + 1);
    }
    cout << dp[n] << endl;
    return 0;
}