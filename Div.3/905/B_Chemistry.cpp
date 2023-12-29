#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, k;
        cin >> n >> k;
        string s; cin >> s;
        int cnt[26]{};
        for (auto &c : s)
            ++cnt[c - 'a'];
        int odd = 0;
        for (int i = 0; i < 26; ++i)
            if (cnt[i] & 1) ++odd;
        if ((n - k) & 1) --odd;
        if (odd > k or ((k - odd) & 1))
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}