#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    vector<int> h(3);
    for (auto &ch : s)
        if (ch == 'B') h[0]++;
        else if (ch == 'S') h[1]++;
        else                h[2]++;
    vector<int> st(3), p(3);
    for (auto &x : st) cin >> x;
    for (auto &x : p) cin >> x;
    ll r; cin >> r;
    auto check = [&](ll x) {
        ll cost = 0;
        for (int i = 0; i < 3; ++i) {
            ll num = max(x * h[i] - st[i], 0LL);
            cost += num * p[i];  
        }
        return cost <= r;
    };
    ll lo = 0, hi = 1e13;
    while (lo < hi) {
        ll mid = lo + (hi - lo + 1) / 2;
        if (check(mid)) lo = mid;
        else            hi = mid - 1; 
    }
    cout << lo << '\n';
    return 0;
}