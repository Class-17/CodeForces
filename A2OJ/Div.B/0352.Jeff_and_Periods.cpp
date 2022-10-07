#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
    map<int, vector<int>> collec;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        collec[x].push_back(i);
    }
    int cnt = 0;
    for (auto &[x, seq] : collec) {
        auto check = [&]() {
            if (size(seq) == 1) return 0;
            int diff = seq[1] - seq[0];
            for (int i = 2; i < size(seq); ++i)
                if (seq[i] - seq[i - 1] != diff) return -1;
            return diff;
        };
        int res = check();
        if(res == -1) 
            seq.clear();
        else {
            seq = {res};
            cnt++;
        }
    }
    cout << cnt << endl;
    for (auto &[x, p]: collec) {
        if (p.empty()) continue;
        cout << x << ' ' << p[0] << endl;
    }
	return 0;
}