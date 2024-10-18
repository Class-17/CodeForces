#include <bits/stdc++.h>

int solve() {
    int n; std::cin >> n;
    std::vector<int> a(n);
    for (auto &x : a) std::cin >> x;
    int minv = 1, maxv = n, lo = 0, hi = n - 1;
    while (lo < hi) {
        if (a[lo] == minv) {
            lo += 1;
            minv += 1;
        }
        else if (a[lo] == maxv) {
            lo += 1;
            maxv -= 1;
        }
        else if (a[hi] == minv) {
            hi -= 1;
            minv += 1;
        }
        else if (a[hi] == maxv) {
            hi -= 1;
            maxv -= 1;
        }
        else
            break;
    }
    if (lo == hi)
        std::cout << -1 << '\n';
    else
        std::cout << lo + 1 << ' ' << hi + 1 << '\n';
    return 0;
}

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) solve();
    return 0;
}