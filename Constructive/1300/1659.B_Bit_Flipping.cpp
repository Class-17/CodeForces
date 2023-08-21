#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, k;
        cin >> n >> k;
        string s; cin >> s;
        int tot = 0;
        vector<int> cnt(n);
        for (int i = 0; i < n and tot < k; ++i) {
            if ((k & 1) == s[i] - '0') {
                ++cnt[i];
                ++tot;
            }
        }
        cnt.back() += k - tot;
        for (int i = 0; i < n; ++i)
            if ((k - cnt[i]) & 1)
                s[i] = ((s[i] - '0') ^ 1) + '0';
        cout << s << '\n';
        for (int i = 0; i < n; ++i)
            cout << cnt[i] << " \n"[i + 1 == n];
    }
    return 0;
}