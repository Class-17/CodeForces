#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        vector<int> d(n);
        for (int i = 0; i < n; ++i)
            while ((arr[i] + d[i]) % k != 0)
                ++d[i];
        int res = *min_element(begin(d), end(d));
        int four = res;
        if (k == 4) {
            d = vector<int>(n);
            for (int i = 0; i < n; ++i)
                while ((arr[i] + d[i]) % 2 != 0)
                    ++d[i];
            sort(begin(d), end(d));
            four = min(four, d[0] + d[1]);
        }
        cout << min(res, four) << '\n';
    }
    return 0;
}