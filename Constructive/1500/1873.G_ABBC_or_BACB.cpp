#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        string s; cin >> s;
        int n = size(s);
        vector<int> idx;
        for (int i = 0; i < n; ++i)
            if (s[i] == 'B') idx.push_back(i);
        if (s[n - 1] != 'B') idx.push_back(n);
        int m = size(idx), sum = 0, minv = n;
        for (int i = 0; i < m; ++i) {
            int cur = idx[i] - (i > 0 ? idx[i-1]+1: 0);
            if (cur <= 0) continue;
            sum += cur;
            minv = min(minv, cur);
        }
        if (s[0] != 'B' and s[n - 1] != 'B' and s.find("BB") == string::npos)
            sum -= minv;
        cout << sum << '\n';
     }
    return 0;
}