#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, k;
        cin >> n >> k;
        map<int, vector<int>> idx;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            if (size(idx[x]) < k)
                idx[x].push_back(i);
        }
        int m = 0;
        for (auto &[x, id] : idx)
            m += size(id);
        m -= m % k;
        int color = 0;
        vector<int> res(n);
        auto coloring = [&]() {
            for (auto &[x, id] : idx)
                for (auto &i : id) {
                    res[i] = color + 1;
                    color = (color + 1) % k;
                    if (--m == 0) return;
                }
        };
        coloring();
        for (int i = 0; i < n; ++i)
            cout << res[i] << " \n"[i + 1 == n];
    }
    return 0;
}