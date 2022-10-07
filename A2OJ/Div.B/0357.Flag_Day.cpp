#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> seq(n + 1, 0);
    for (int i = 0; i < m; ++i) {
        vector<int> curr(3);
        for (auto &x : curr) cin >> x;
        vector<bool> colors(4);
        for (auto &x : curr)
            if (seq[x] > 0)
                colors[seq[x]] = true;
        for (auto &x : curr) {
            if (seq[x] > 0) continue;
            auto find = [&]() {
                for (int i = 1; i <= 3; ++i)
                    if (!colors[i]) return i;
                return 0;
            };
            seq[x] = find();
            colors[seq[x]] = true;
        }
    }
    for (int i = 1; i <= n; ++i)
        cout << seq[i] << (i < n ? ' ' : '\n');
    return 0;
}