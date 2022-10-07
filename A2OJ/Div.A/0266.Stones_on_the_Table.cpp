#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0, p = 0;
    while (p < n) {
        int np = p + 1;
        while (s[np] == s[p]) np++;
        cnt += np - p - 1;
        p = np;
    }
    cout << cnt << endl;
    return 0;
}