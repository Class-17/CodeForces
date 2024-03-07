#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> dp(n);
        for (int i = 0; i < n; ++i) {
            if (s[i] == '*') continue;
            if (i - 1 >= 0)
                dp[i] = max(dp[i], dp[i - 1]);
            if (i - 2 >= 0)
                dp[i] = max(dp[i], dp[i - 2]);
            bool a = i - 1 >= 0 and s[i - 1] != '*';
            bool b = i - 2 >= 0 and s[i - 2] != '*';
            if (a == false and b == false and i > 0) break;
            dp[i] += s[i] == '@';
        }
        cout << *max_element(begin(dp), end(dp)) << '\n';
    }
    return 0;
}