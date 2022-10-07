#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int s, n; cin >> s >> n;
    vector<pair<int, int>> seq(n);
    for (int i = 0; i < n; ++i)
        cin >> seq[i].first >> seq[i].second;
    sort(begin(seq), end(seq));
    auto check = [&]() {
        for (auto & [x, y] : seq) {
            if (s <= x) return false;
            s += y;
        }
        return true;
    };
    cout << (check() ? "YES" : "NO") << endl;
	return 0;
}