#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> p(n + 1), id(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> p[i];
            id[p[i]] = i;
        }
        for (int i = 1; i <= n; ++i)
            cout << min(id[i] + 1, n) << " \n"[i == n];
    }
    return 0;
}