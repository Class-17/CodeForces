#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    vector<int> mp(n + 1), cnt(n + 1);
    for (int i = 0; i < n; ++i)
        mp[a[i]] = i;
    for (int i = 0; i < n; ++i) {
        int d = (i - mp[b[i]] + n) % n;
        ++cnt[d];
    }
    cout << *max_element(begin(cnt), end(cnt)) << '\n';
    return 0;
}