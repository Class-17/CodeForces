#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

constexpr i64 N = 1e12;

vector<i64> nums;
auto gen = []() {
    for (i64 i = 3, j = 6; j <= N; j *= ++i)
        nums.push_back(j);
    return 0;
} ();

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int m = size(nums);
    int _; cin >> _;
    while (_--) {
        i64 n; cin >> n;
        int res = __popcount(n);
        for (int i = 0; i < (1 << m); ++i) {
            i64 sum = 0;
            for (int j = 0; j < m and sum < n; ++j)
                if (i >> j & 1) sum += nums[j];
            if (sum > n) continue;
            res = min(res, __popcount(i) + __popcount(n-sum));
        }
        cout << res << '\n';
    }
    return 0;
}