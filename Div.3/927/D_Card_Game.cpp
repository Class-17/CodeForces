#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        char ace; cin >> ace;
        vector<string> arr(n * 2);
        map<char, vector<int>> mp;
        for (auto &x : arr) {
            cin >> x;
            mp[x[1]].push_back(x[0] - '0');
        }
        auto check = [&]() {
            int odd = 0;
            for (auto &[ch, seq] : mp) {
                sort(begin(seq), end(seq));
                if (ch != ace) odd += size(seq) & 1;
            }
            if (odd > size(mp[ace])) return false;
            for (auto &[ch, seq] : mp) {
                if (ch == ace) continue;
                    int len = size(seq);
                    for (int i = 0; i < len; i += 2) {
                        cout << seq[i] << ch << ' ';
                        if (i + 1 < len)
                            cout << seq[i + 1] << ch << '\n';
                        else {
                            cout << mp[ace].back() << ace << '\n';
                            mp[ace].pop_back();
                        }
                    }
            }
            for (int i = 0; i < mp[ace].size(); i += 2) {
                cout << mp[ace][i] << ace << ' ';
                cout << mp[ace][i + 1] << ace << '\n';
            }
            return true;
        };
        if (!check())
            cout << "IMPOSSIBLE" << '\n';
    }
    return 0;
}