#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll k; cin >> k;
    vector cnt(10, 1);
    int idx = 1;
    ll x = 1;
    while (x < k) {
        ++cnt[idx];
        x = x * cnt[idx] / (cnt[idx] - 1);
        idx = (idx + 1) % 10;
    }
    const string s = "codeforces";
    string res;
    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < cnt[i]; ++j)
            res.push_back(s[i]);
    cout << res << '\n';
    return 0;
}