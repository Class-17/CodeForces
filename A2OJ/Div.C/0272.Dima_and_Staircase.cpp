#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    for (int i = 1; i < n; ++i)
        a[i] = max(a[i], a[i - 1]);
    int m; cin >> m;
    long long curr = 0;
    for (int i = 0; i < m; ++i) {
        int w, h;
        cin >> w >> h;
        curr = max(curr, a[w - 1]);
        cout << curr << '\n';
        curr += h;
    }
    return 0;
}