#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    i64 n, k;
    cin >> n >> k;
    i64 res = n, p = 1;
    for (int i = 1; i < 64; ++i)
        if (n >> i & 1) p = i;
    if (k == 1)
        cout << n << '\n';
    else
        cout << (1LL << (p + 1)) - 1 << '\n';
    return 0;
}