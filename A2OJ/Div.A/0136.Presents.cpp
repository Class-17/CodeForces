#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> seq(n);
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        seq[x - 1] = i;
    }
    for (int i = 0; i < n; ++i)
        cout << seq[i] + 1 << (i + 1 < n ? ' ' : '\n');
    return 0;
}