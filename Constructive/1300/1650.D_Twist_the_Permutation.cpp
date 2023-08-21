#include <bits/stdc++.h>
using namespace std;

int shift(vector<int> &arr, int p) {
    int cnt = 0;
    while (arr[(p - 1 + cnt) % p + 1] != p)
        ++cnt;
    vector<int> res(p + 1);
    for (int i = 1; i <= p; ++i)
        res[i] = arr[(i - 1 + cnt) % p + 1];
    for (int i = 1; i <= p; ++i)
        arr[i] = res[i];
    return cnt;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> p(n + 1);
        for (int i = 1; i <= n; ++i)
            cin >> p[i];
        vector<int> res(n + 1);
        for (int i = n; i >= 1; --i)
            res[i] = shift(p, i);
        for (int i = 1; i <= n; ++i)
            cout << res[i] << " \n"[i == n];
    }
    return 0;
}