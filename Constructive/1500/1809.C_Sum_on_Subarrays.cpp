#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, k;
        cin >> n >> k;
        int m = 1;
        while (m * (m + 1) / 2 <= k) ++m;
        m -= 1;
        vector<int> res(n, -1000);
        for (int i = 0; i < m; ++i)
            res[i] = 2;
        int rem = k - m * (m + 1) / 2;
        if (rem > 0)
            res[m] = (m - rem) * -2 - 1;
        for (int i = 0; i < n; ++i)
            cout << res[i] << " \n"[i + 1 == n];
    }
    return 0;
}