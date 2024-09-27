#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        if (n - count(begin(arr), end(arr), 0) & 1) {
            cout << -1 << '\n';
            continue;
        }
        vector<pair<int, int>> res;
        for (int i = 0; i < n; ++i) {
            if (arr[i] == 0) {
                res.emplace_back(i, i);
            }
            else {
                int j = i + 1, sum = arr[i], sign = -1;
                while (j < n) {
                    sum += arr[j] * sign;
                    sign *= -1;
                    if (arr[j] != 0) break;
                    ++j;
                }
                if (sum == 0) {
                    res.emplace_back(i, j);
                }
                else {
                    if (j - i + 1 & 1) {
                        res.emplace_back(i, i);
                        res.emplace_back(i + 1, j);
                    }
                    else {
                        res.emplace_back(i, j - 1);
                        res.emplace_back(j, j);
                    }
                }
                i = j;
            }
        }
        cout << size(res) << '\n';
        for (auto &[l, r] : res)
            cout << l+1 << ' ' << r+1 << '\n';
    }
    return 0;
}