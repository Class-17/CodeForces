#include <bits/stdc++.h>

int solve() {
    int n; std::cin >> n;
    std::vector<int> a(n);
    for (auto &x : a) std::cin >> x;
    std::vector<int> pref(n), suf(n);
    std::vector<int> mp1(n + 1), mp2(n + 1);
    for (int i = 0; i < n; ++i) {
        if (i > 0) pref[i] = pref[i - 1];
        mp1[a[i]] = 1;
        while (mp1[pref[i]]) pref[i] += 1;
    }
    for (int i = n - 1; i >= 0; --i) {
        if (i < n - 1) suf[i] = suf[i + 1];
        mp2[a[i]] = 1;
        while (mp2[suf[i]]) suf[i] += 1;
    }
    int lo = n - 1, hi = 0;
    for (int i = n - 2; i >= 0; --i)
        if (pref[i] == pref[n - 1]) lo = i;
    for (int i = 1; i < n; ++i)
        if (suf[i] == suf[0]) hi = i;
    if (lo >= hi) std::cout << -1 << '\n';
    else {
        std::cout << 2 << '\n';
        std::cout << 1 << ' ' << lo + 1 << '\n';
        std::cout << lo + 2 << ' ' << n << '\n';
    }
    return 0; 
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) solve();
    return 0;
}