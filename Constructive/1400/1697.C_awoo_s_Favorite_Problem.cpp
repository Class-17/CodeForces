#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        string s, t;
        cin >> s >> t;
        string a, b;
        for (auto &x : s)
            if (x != 'b')
                a.push_back(x);
        for (auto &x : t)
            if (x != 'b')
                b.push_back(x);
        if (a != b) {
            cout << "NO" << '\n';
            continue;
        }
        vector<int> idx;
        for (int i = 0; i < n; ++i)
            if (s[i] != 'b')
                idx.push_back(i);
        int j = 0;
        bool res = true;
        for (int i = 0; i < n; ++i) {
            if (t[i] == 'a') {
                if (i < idx[j]) {
                    res = false;
                    break;
                }
                ++j;            
            }
            if (t[i] == 'c') {
                if (i > idx[j]) {
                    res = false;
                    break;
                }
                ++j;
            }
        }
        cout << (res ? "YES" : "NO") << '\n';
    }
    return 0;
}