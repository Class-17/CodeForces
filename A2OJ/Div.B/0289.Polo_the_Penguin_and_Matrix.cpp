#include <bits/stdc++.h>
using namespace std;

constexpr int inf = 1e8;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, d;
    cin >> n >> m >> d;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            int x; cin >> x;
            mp[x]++;
        }
    auto check = [&](int val) {
        int sum = 0;
        for (auto &[x, cnt] : mp) {
            int diff = abs(x - val);
            if (diff % d) return inf;
            sum += diff / d * cnt;
        }
        return sum;
    };
    int res = inf;
    for (auto &[x, cnt] : mp)
        res = min(check(x), res);
    cout << (res == inf ? -1 : res) << endl;
    return 0;
}