#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    int n; cin >> n;
    unordered_map<int, vector<int>> mp;
    for (int i = 1; i <= n * 2; ++i) {
        int x; cin >> x;
        mp[x].push_back(i);
    }
    auto check = [&]() {
        for (auto &[x, num] : mp)
            if (size(num) % 2) return false;
        return true;
    };
    if (!check()) cout << -1 << endl;
    else
        for (auto &[x, seq] : mp)
            for (int i = 0; i < size(seq); i += 2)
                cout << seq[i] << ' ' << seq[i + 1] << endl;
	return 0;
}