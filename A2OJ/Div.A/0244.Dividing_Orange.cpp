#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> seq(k);
    vector<bool> st(n * k + 1);
    for (auto &x : seq) {
        cin >> x;
        st[x] = true;
    }
    int curr = 1;
    for (int i = 0; i < k; ++i) {
        cout << seq[i] << ' ';
        for (int j = 1; j < n; ++j) {
            while (curr <= n * k && st[curr]) curr++;
            cout << curr++ <<  (j + 1 < n ? ' ' : '\n');
        }
    }
    return 0;
}