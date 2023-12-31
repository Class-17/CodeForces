#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> arr(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    vector<vector<ll>> dp(n + 2, vector<ll>(k + 1, -1));
    dp[0][0] = 0;
    for (int i = 1; i + m - 1 <= n; ++i) {
        for (int j = 0; j < k && dp[i - 1][j] >= 0; ++j)
            dp[i][j] = max(dp[i - 1][j], dp[i][j]);
        for (int j = 0; j < k && dp[i][j] >= 0; ++j)
            dp[i + m][j + 1] = max(dp[i][j] + arr[i + m - 1] - arr[i - 1], dp[i + m][j + 1]);
    }
    ll sum = 0;
    for (int i = 1; i <= n + 1; ++i)
        sum = max(dp[i][k], sum);
    cout << sum << '\n';
    return 0;
}