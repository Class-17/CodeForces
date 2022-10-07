#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> seq(n);
    for (auto &x : seq) cin >> x;
    sort(rbegin(seq), rend(seq));
    sort(begin(seq) + 1, begin(seq) + n - 1);
    for (int i = 0; i < n; ++i)
        cout << seq[i] << (i + 1 < n ? ' ' : '\n');
    return 0;
}