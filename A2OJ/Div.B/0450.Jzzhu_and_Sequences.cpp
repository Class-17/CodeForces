#include <bits/stdc++.h>
using namespace std;

constexpr long long mod = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, n;
    cin >> x >> y >> n;
    int f[6] = {x, y};
    for (int i = 2; i < 6; ++i)
        f[i] = f[i - 1] - f[i - 2];
    cout << (f[(n - 1) % 6] + mod * 10) % mod << endl;
    return 0;
}