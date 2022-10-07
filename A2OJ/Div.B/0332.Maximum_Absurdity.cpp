#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    vector<vector<pair<ll, int>>> dp(n + 2, vector<pair<ll, int>>(2 + 1, {-1, -1}));
    dp[0][0] = {0, 0};
    for (int i = 1; i + k - 1 <= n; ++i) {
        for (int j = 0; j < 2 && dp[i - 1][j].first >= 0; ++j)
            if (dp[i - 1][j].first >= dp[i][j].first)
                dp[i][j] = dp[i - 1][j];
        for (int j = 0; j < 2 && dp[i][j].first >= 0; ++j)
            if (dp[i][j].first + arr[i + k - 1] - arr[i - 1] > dp[i + k][j + 1].first)
                dp[i + k][j + 1] = {dp[i][j].first + arr[i + k - 1] - arr[i - 1], i};
    }
    int p = 0;
    for (int i = 1; i <= n + 1; ++i)
        if (dp[i][2].first > dp[p][2].first) p = i;
    int b = dp[p][2].second;
    int a = dp[b][1].second;
    cout << a << ' ' << b << '\n';
    return 0;
}