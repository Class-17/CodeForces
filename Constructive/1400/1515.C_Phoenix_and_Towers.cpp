#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, m, x;
        cin >> n >> m >> x;
        priority_queue<pii, vector<pii>, greater<>> pq;
        for (int i = 1; i <= m; ++i)
        	pq.emplace(0, i);
        vector<int> res(n);
        for (int i = 0; i < n; ++i) {
        	auto [w, idx] = pq.top(); pq.pop();
        	int x; cin >> x;
        	pq.emplace(w + x, idx);
        	res[i] = idx;
		}
		cout << "YES" << '\n';
		for (int i = 0; i < n; ++i)
			cout << res[i] << " \n"[i + 1 == n];
    }
    return 0;
}