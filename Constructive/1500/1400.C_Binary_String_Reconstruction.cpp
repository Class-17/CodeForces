#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        string s; cin >> s;
        int x; cin >> x;
        int n = size(s);
        string w(n, '1');
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') continue;
            if (i - x >= 0) w[i - x] = '0';
            if (i + x < n)  w[i + x] = '0';
        }
        bool res = true;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') continue;
            bool a = (i - x >= 0 and w[i - x] == '1');
            bool b = (i + x < n and w[i + x] == '1');
            if (!a and !b) {
                res = false;
                break;
            }
        }
        if (res)
            cout << w << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}