#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(k);
        for (auto &x : a) cin >> x;
        auto check = [&]() {
            set<int> st{k + 1};
            for (auto &x : a) {
                if (n * m - size(st) < 3) return false;
                st.insert(x);
                if (x + 1 < *rbegin(st)) continue;
                st.erase(*rbegin(st));
                while (st.count(x - 1)) {
                    st.erase(x);
                    --x;
                }
            }
            return true;
        };
        cout << (check() ? "YA" : "TIDAK") << '\n';
    }
    return 0;
}