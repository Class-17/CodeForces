#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        string s; cin >> s;
        vector<int> res;
        auto dfs = [&](auto &dfs, int idx, int l, int r)->int {
            if (idx == n) return 1;
            int val;
            if (s[idx] == 'L') {
                val = dfs(dfs, idx + 1, l + 1, r);
                val = val * arr[l] % m;
            }
            else {
                val = dfs(dfs, idx + 1, l, r - 1);
                val = val * arr[r] % m;
            }
            res.push_back(val);
            return val;            
        };
        dfs(dfs, 0, 0, n - 1);
        for (int i = n - 1; i >= 0; --i)
            cout << res[i] << " \n"[i == 0];
    }
    return 0;
}