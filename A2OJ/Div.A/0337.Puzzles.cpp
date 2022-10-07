#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
    cin >> n >> m;
    vector<int> nums(m);
    for (auto &x : nums) cin >> x;
    sort(begin(nums), end(nums));
    int diff = INT_MAX;
    for (int i = 0; i + n - 1 < m; ++i)
        diff = min(nums[i + n - 1] - nums[i], diff);
    cout << diff << endl;
	return 0;
}