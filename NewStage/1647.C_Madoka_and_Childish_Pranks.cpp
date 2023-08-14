#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, m;
        cin >> n >> m;
        vector<string> table(n);
        for (auto &row : table) cin >> row;
        if (table[0][0] == '1') {
            cout << -1 << '\n';
            continue;
        }
        int cnt = 0;
        for (auto &row : table)
            for (auto &c : row)
                cnt += (c == '1');
        cout << cnt << '\n';
        for (int i = n - 1; i >= 0; --i) {
            for (int j = m - 1; j > 0; --j)
                if (table[i][j] == '1')
                    cout << i+1 << ' ' << j << ' ' << i+1 << ' ' << j+1 << '\n';
            if (table[i][0] == '1')
                cout << i << ' ' << 1 << ' ' << i+1 << ' ' << 1 << '\n';
        }
    }
    return 0;
}