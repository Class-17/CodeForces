#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    i64 n, m;
    cin >> n >> m;
    int i = 0;
    while (i * (i - 1LL) / 2 < m) ++i;
    cout << n - min(n, m * 2) << ' ' << n - i << endl;
    return 0;
}