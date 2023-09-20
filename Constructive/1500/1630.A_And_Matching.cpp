#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, k;
        cin >> n >> k;
        vector<int> res(n);
        iota(begin(res), end(res), 0);
        if (k < n - 1) {
            swap(res[k], res[0]);
            for (int i = 0; i < n / 2; ++i)
                cout << res[i] << ' ' << res[n - 1 - i] << '\n';
        }
        else if (k > 4) {
            swap(res[n - 2], res[n - 3]);
            swap(res[n - 3], res[0]);
            for (int i = 0; i < n / 2; ++i)
                cout << res[i] << ' ' << res[n - 1 - i] << '\n';
        }
        else
            cout << -1 << '\n';
    }
    return 0;
}