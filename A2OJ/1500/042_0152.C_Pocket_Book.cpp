#include <bits/stdc++.h>
using namespace std;

constexpr int MOD = 1e9 + 7;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<string> names(n);
    for (auto &x : names) cin >> x;
    int res = 1;
    for (int j = 0; j < m; ++j) {
        set<char> st;
        for (int i = 0; i < n; ++i)
            st.insert(names[i][j]);
        res = res * size(st) % MOD;
    }
    cout << res << '\n';
	return 0;
}