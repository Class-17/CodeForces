#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> seq(n);
    for (auto &x : seq) cin >> x;
    sort(begin(seq), end(seq));
    long long moves = 0;
    for (int i = 0; i < n; ++i)
        moves += abs(seq[i] - i - 1);
    cout << moves << endl;
    return 0;
}