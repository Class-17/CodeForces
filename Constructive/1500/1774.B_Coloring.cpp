#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, m, k;
        cin >> n >> m >> k;
        int rem = n % k;
        for (int i = 0; i < m; ++i) {
            int x; cin >> x;
            if ((x - 1) * k >= n)
                rem = -1;
            else if (x * k > n)
                --rem;
        }
        cout << (rem >= 0 ? "YES" : "NO") << '\n';
    }
    return 0;
}