#include <bits/stdc++.h>
using namespace std;

using ll = long long;

constexpr int maxn = 1e5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    ll cnt[maxn + 1] = {0LL};
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        cnt[x]++;
    }
    ll dp[maxn + 1] = {0LL, cnt[1]};
    for (int i = 2; i <= maxn; ++i)
        dp[i] = max(dp[i - 1], dp[i - 2] + cnt[i] * i);
    cout << dp[maxn] << '\n';
    return 0;
}