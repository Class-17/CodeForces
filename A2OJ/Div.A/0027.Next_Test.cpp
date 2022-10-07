#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> seq(n);
    for (auto &x : seq) cin >> x;
    seq.push_back(0);
    sort(begin(seq), end(seq));
    int idx = 1;
    while (idx <= n && seq[idx] == idx) idx++;
    cout << idx << '\n';
    return 0;
}