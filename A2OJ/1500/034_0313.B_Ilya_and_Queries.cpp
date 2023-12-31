#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    vector<int> dp(size(s));
    for (int i = 1; i < size(s); ++i)
        dp[i] = (s[i] == s[i - 1]) + dp[i - 1];
    int m; cin >> m;
    for (int i = 0; i < m; ++i) {
        int l, r;
        cin >> l >> r;
        cout << dp[r - 1] - dp[l - 1] << '\n';
    }
    return 0;
}