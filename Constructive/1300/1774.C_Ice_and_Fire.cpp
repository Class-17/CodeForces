#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        string s; cin >> s;
        cout << 1;
        int prev = 1;
        for (int i = 1; i + 1 < n; ++i) {
            if (s[i] == s[i - 1])
                prev += 1;
            else
                prev = 1;
            cout << ' ' << i + 1 - prev + 1;
        }
        cout << '\n';
    }
    return 0;
}