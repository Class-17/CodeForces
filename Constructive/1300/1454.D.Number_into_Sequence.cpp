#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        ll n; cin >> n;
        vector<pair<ll, ll>> facs;
        for (ll i = 2; i * i <= n; ++i) {
            int cnt = 0;
            while (n % i == 0) {
                n /= i;
                ++cnt;
            }
            if (cnt > 0)
                facs.push_back({cnt, i});
        }
        if (n > 1) facs.push_back({1, n});
        sort(begin(facs), end(facs));
        vector<ll> res(facs.back().first, facs.back().second);
        facs.pop_back();
        for (auto &[cnt, num] : facs) {
            for (int i = 0; i < cnt; ++i)
                res.back() *= num;
        }
        int k = size(res);
        cout << k << '\n';
        for (int i = 0; i < k; ++i)
            cout << res[i] << (i + 1 < k ? ' ' : '\n');
    }
    return 0;
}