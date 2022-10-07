#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector cnt(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            ++cnt[x];
        }
        vector res(n + 1, -1LL);
        vector<int> st;
        ll cost = 0;
        for (int i = 0; i <= n; ++i) {
            res[i] = cost + cnt[i];
            for (int j = 0; j < cnt[i]; ++j)
                st.push_back(i);
            if (st.empty()) break;
            cost += i - st.back();
            st.pop_back();
        }
        for (int i = 0; i <= n; ++i)
            cout << res[i] << (i < n ? ' ' : '\n');
    }
    return 0;
}