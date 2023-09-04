#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        auto sum = accumulate(begin(arr), end(arr), 0LL);
        auto xsum = accumulate(begin(arr), end(arr), 0LL, bit_xor<>());
        cout << 2 << '\n';
        cout << xsum << ' ' << sum + xsum << '\n';
    }
    return 0;
}