#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
    int cnt[8] = {0};
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        cnt[x]++;
    }
    vector<tuple<int, int, int>> res;
    auto split = [&]() {
        auto find = [&](int x) {
            for (int i = x + 1; i < 8; ++i)
                if (cnt[i] && (x == 0 || !(i % x))) return i;
            return -1;
        };
        for (int i = 0; i < n / 3; ++i) {
            int curr[4] = {0};
            for (int j = 1; j <= 3; ++j) {
                curr[j] = find(curr[j - 1]);
                if (curr[j] == -1) return false;
                cnt[curr[j]]--;
            }
            res.emplace_back(curr[1], curr[2], curr[3]);
        }
        return true;
    };
    if (!split()) cout << -1 << endl;
    else {
        for (auto &[a, b, c] : res)
            cout << a << ' ' << b << ' ' << c << endl;
    }
	return 0;
}