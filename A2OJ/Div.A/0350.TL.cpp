#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for (auto &x : a) cin >> x;
	for (auto &x : b) cin >> x;
	sort(begin(a), end(a));
	int limit = *min_element(begin(b), end(b));
	int tl = max(a.front() * 2, a.back());
	cout << (tl < limit ? tl : -1) << endl;
	return 0;
}