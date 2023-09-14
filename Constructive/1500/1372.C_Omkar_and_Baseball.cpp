#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> p(n);
        for (auto &x : p) cin >> x;
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (p[i] == i + 1) continue;
            int j = i;
            while (j < n and p[j] != j + 1) ++j;
            cnt += 1;
            i = j - 1;
        }
        cout << min(2, cnt) << '\n';
    }
    return 0;
}