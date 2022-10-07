#include <bits/stdc++.h>
using namespace std;

constexpr int mod = 1e9 + 7;
constexpr int maxn = 100;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, d;
    cin >> n >> k >> d;
    long long dp[maxn + 1][2] = {1};
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < d && i + j <= n; ++j) {
            dp[i + j][0] = (dp[i + j][0] + dp[i][0]) % mod;
            dp[i + j][1] = (dp[i + j][1] + dp[i][1]) % mod;
        }
        for (int j = d; j <= k && i + j <= n; ++j)
            dp[i + j][1] = (dp[i + j][1] + dp[i][0] + dp[i][1]) % mod;
    }
    cout << dp[n][1] << '\n';
    return 0;
}