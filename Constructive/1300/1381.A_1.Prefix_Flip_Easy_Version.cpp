#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        string a, b; cin >> a >> b;
        vector<int> ops;
        auto transe = [&](int x) {
            for (int i = 0; i < x; ++i)
                a[i] = (!(a[i] - '0')) + '0';
            reverse(begin(a), begin(a) + x);
        };
        for (int i = n - 1; i >= 0; --i) {
            if (a[i] == b[i]) continue;
            if (a[0] != a[i]) {
                ops.push_back(1);
                transe(1);
            }
            ops.push_back(i + 1);
            transe(i + 1);
        }
        cout << size(ops);
        for (auto &x : ops) cout << ' ' << x;
        cout << '\n';
    }
    return 0;
}