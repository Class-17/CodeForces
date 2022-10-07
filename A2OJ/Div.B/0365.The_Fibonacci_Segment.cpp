#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> seq(n);
    for (auto &x : seq) cin >> x;
    int max_len = min(n, 2);
    int p = 0;
    while (p < n) {
        int np = p + 2;
        while (np < n && seq[np] == seq[np - 1] + seq[np - 2]) np++;
        if (np - p > 2)
            max_len = max(np - p, max_len);
        p = max(np - 2, p + 1);
    }
    cout << max_len << '\n';
    return 0;
}