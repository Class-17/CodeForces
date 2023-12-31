#include <bits/stdc++.h>
using namespace std;

constexpr int MOD = 1e9 + 7;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
	vector dp(n+1, vector<int>(k+1));
    for (int i = 1; i <= n; ++i) {
        dp[i][1] = 1;
        for (int l = 2; l <= k; ++l)
            dp[i][l] = (dp[i][l] + dp[i][l-1]) % MOD;
        for (int j = i + i; j <= n; j += i)
            for (int l = 1; l < k; ++l)
                dp[j][l+1] = (dp[j][l+1] + dp[i][l]) % MOD;
    }
    int res = 0;
    for (int i = 1; i <= n; ++i)
        res = (res + dp[i][k]) % MOD;
    cout << res << '\n';
	return 0;
}