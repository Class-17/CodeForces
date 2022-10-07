#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        ll add = 0, minus = 0;
        for (auto &x : arr)
            tie(add, minus) = pair{max(add, minus + x), max(minus, add - x)};
        cout << max(add, minus) << '\n';
    }
    return 0;
}