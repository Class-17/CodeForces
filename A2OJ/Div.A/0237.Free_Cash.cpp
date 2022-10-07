#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    map<pair<int, int>, int> mp;
    for (int i = 0; i < n; ++i) {
        pair<int, int> x;
        cin >> x.first >> x.second;
        mp[x]++;
    }
    int res = 1;
    for (auto &[x, cnt] : mp)
        res = max(cnt, res);
    cout << res << endl;
    return 0;
}