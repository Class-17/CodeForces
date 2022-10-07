#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
	vector<pair<int, int>> seq(n);
	int min_l = 1e9 + 1, max_r = 0;
	for (int i = 0; i < n; ++i) {
		cin >> seq[i].first >> seq[i].second;
		min_l = min(seq[i].first, min_l);
		max_r = max(seq[i].second, max_r);
	}
	auto find = [&]() {
		for (int i = 0; i < n; ++i)
			if (seq[i].first == min_l && seq[i].second == max_r)
				return i + 1;
		return -1;
	};
	cout << find() << endl;
	return 0;
}