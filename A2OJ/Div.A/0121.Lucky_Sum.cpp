#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> nums;
    auto dfs = [&](auto &dfs, const ll &num) {
        nums.push_back(num);
        if (num > 1e9) return;
        dfs(dfs, num * 10 + 4);
        dfs(dfs, num * 10 + 7);
    };
    dfs(dfs, 0);
    sort(begin(nums), end(nums));
    long long l, r;
    cin >> l >> r;
    long long p = 0, sum = 0;
    while (l < r + 1) {
        while (p < size(nums) && nums[p] < l) p++;
        long long nl = min(nums[p], r);
        sum += (nl - l + 1) * nums[p];
        l = nl + 1;
    }
    cout << sum << '\n';
    return 0;
}