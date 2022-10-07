#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<long long> arr(n);
    for (auto &x : arr) cin >> x;
    int add = 0;
    for (int i = 0; i < m; ++i) {
        int op; cin >> op;
        if (op == 1) {
            int v, x;
            cin >> v >> x;
            arr[v - 1] = x - add;
        }
        else if (op == 2) {
            int y; cin >> y;
            add += y;
        }
        else {
            int q; cin >> q;
            cout << arr[q - 1] + add << '\n';
        }
    }   
    return 0;
}