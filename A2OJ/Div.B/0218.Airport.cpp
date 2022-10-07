#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<int> nums(m);
	for (auto &x : nums) cin >> x;
	priority_queue a {less<int>(), nums};
	priority_queue b {greater<int>(), nums};
	auto get_val = [&](auto &collec) {
		int sum = 0;
		for (int i = 0; i < n; ++i) {
			int x = collec.top();
			collec.pop();
			sum += x;
			if (x - 1 > 0) collec.push(x - 1);
		}
		return sum;
	};
	cout << get_val(a) << " " << get_val(b) << endl;
	return 0;
}