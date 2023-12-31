#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int s(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

ll f(int x, int a) {
    ll res = 1;
    while (a-- > 0) res *= x;
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> res;
    for (int i = 1; i <= 81; ++i) {
        ll x = b * f(i, a) + c;
        if (s(x) == i && x < 1e9)
            res.push_back(x);
    }
    cout << size(res) << '\n';
    for (int i = 0; i < size(res); ++i)
        cout << res[i] << (i + 1 < size(res) ? ' ' : '\n');
    return 0;
}