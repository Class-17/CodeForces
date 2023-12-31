#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	string s; cin >> s;
    int n = size(s);
    auto dfs = [&](auto &dfs, int num, int idx, int rem) {
        if (rem == 0) {
            if (num % 8 == 0) {
                cout << "YES" << '\n';
                cout << num << '\n';
                exit(0);
            }
            return;
        }
        for (int i = idx; i < n; ++i)
            dfs(dfs, num * 10 + s[i] - '0', i + 1, rem - 1);
    };
    for (int i = 1; i <= 4; ++i)
        dfs(dfs, 0, 0, i);       
    cout << "NO" << '\n';
	return 0;
}