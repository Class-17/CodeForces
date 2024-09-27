#include <bits/stdc++.h>
using namespace std;

bool check(string &a, string &b, int k) {
    int n = size(a);
    int cnt[26]{};
    for (int i = 0; i < n; ++i) {
        if (k <= i or i + k < n) {
            ++cnt[a[i] - 'a'];
            --cnt[b[i] - 'a'];
        }
        else if (a[i] != b[i])
            return false;
    }
    return count(cnt, cnt + 26, 0) == 26;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s >> t;
        cout << (check(s, t, k) ? "YES" : "NO") << '\n';
    }
    return 0;
}