#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    int cost = 0;
    for (auto &x : v) cin >> x;
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        cost += min(v[a - 1], v[b - 1]);
    }
    cout << cost << '\n';
    return 0;
}