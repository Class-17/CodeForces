#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<ll> a(n + 1, 0);
    for (int i = 1; i <= n; ++i) 
        cin >> a[i];
    vector<ll> b(begin(a), end(a));
    sort(begin(b) + 1, end(b));
    for (int i = 1; i <= n; ++i) {
        a[i] += a[i - 1];
        b[i] += b[i - 1];
    }
    int m; cin >> m;
    for (int i = 0; i < m; ++i) {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
            cout << a[r] - a[l - 1] << endl;
        else
            cout << b[r] - b[l - 1] << endl;
    }
    return 0;
}