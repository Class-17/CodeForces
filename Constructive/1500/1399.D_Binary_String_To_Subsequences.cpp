#include <bits/stdc++.h>
using namespace std;
    
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<vector<int>> pos(2);
        vector<int> res(n);
        for (int i = 0; i < n; ++i) {
            int p = size(pos[0]) + size(pos[1]);
            int x = s[i] - '0';
            if (pos[x ^ 1].empty())
                pos[x].push_back(p);
            else {
                p = pos[x ^ 1].back();
                pos[x ^ 1].pop_back();
                pos[x].push_back(p);
            }
            res[i] = p;
        }
        cout << size(pos[0]) + size(pos[1]) << '\n';
        for (int i = 0; i < n; ++i)
            cout << res[i] + 1 << (i + 1 < n ? ' ' : '\n');
    }
    return 0;
}