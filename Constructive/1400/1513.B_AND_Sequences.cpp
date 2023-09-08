#include <bits/stdc++.h>
using namespace std;

constexpr int MOD = 1e9 + 7;

constexpr int N = 2e5 + 1;

int f[N + 1];

auto init = []() {
    f[0] = f[1] = 1;
    for (int i = 2; i <= N; ++i)
        f[i] = 1LL * f[i - 1] * i % MOD;
    return 0;
} ();

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        int minv = *min_element(begin(arr), end(arr));
        int m = count(begin(arr), end(arr), minv);
        if (accumulate(begin(arr), end(arr), minv, bit_and<>()) != minv) {
            cout << 0 << '\n';
            continue;
        }
        int cm2 = (m - 1LL) * m % MOD;
        cout << 1LL * cm2 * f[n - 2] % MOD << '\n';
    }
    return 0;
}