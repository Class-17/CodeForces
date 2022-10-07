#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    ll n, m;
    cin >> n >> m;
    ll cnt = n / m;
    ll l = n % m;
    ll r = m - l;
    ll min = l * (cnt + 1) * cnt / 2 + r * (cnt - 1) * cnt / 2;
    ll max = (n - m) * (n - m + 1) / 2;
    cout << min << ' ' << max << '\n';
    return 0;
}