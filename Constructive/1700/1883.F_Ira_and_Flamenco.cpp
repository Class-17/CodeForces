#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

constexpr int MOD = 1e9 + 7;
constexpr int N = 2e5;

int fac[N + 1];
auto fac_init = []() {
    fac[0] = 1;
    for (int i = 1; i <= N; ++i)
        fac[i] = fac[i - 1] * i % MOD;
    return 0;
} ();

i64 quick_pow(i64 x, i64 n) {
    i64 res = 1;
    while (n) {
        if (n & 1)
            res = res *  x % MOD;
        x = x * x % MOD;
        n >>= 1;
    }
    return res;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, m;
        cin >> n >> m;
        map<int, int> mp;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            ++mp[x];
        }
        vector<int> v, cnt;
        for (auto &[key, val] : mp) {
            v.push_back(key);
            cnt.push_back(val);
        }
        n = size(v);
        i64 res = 0, prod = 1;
        for (int i = 0, j = 0; i < n; ++i) {
            while (j < n and v[j] - v[i] < m) {
                prod = prod * cnt[j] % MOD;
                ++j;
            }
            if (j - i == m)
                res = (res + prod) % MOD;
            prod = prod * quick_pow(cnt[i], MOD - 2) % MOD;
        }
        cout << res << '\n';
    }
    return 0;
}