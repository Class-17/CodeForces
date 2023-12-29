#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int f(int a, int b) {
    int p = 0;
    if (a > b) {
        while (a > (b << p))
            ++p;
        return -p;
    }
    while ((a << (p + 1)) <= b)
            ++p;
    return p;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        i64 res = 0, base = 0, prev = 1;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            int curr = f(prev, x);
            base -= curr;
            base = max(base, 0LL);
            res += base;
            prev = x;
        }
        cout << res << '\n';
    }
    return 0;
}