#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> seq(n);
    for (auto &[p, t] : seq)
        cin >> p >> t;
    sort(begin(seq), end(seq), [](const auto &a, const auto &b) {
        if (a.first == b.first) return a.second < b.second;
        return a.first > b.first;
    });
    int res = count_if(begin(seq), end(seq), [&](const auto &x){
        return x == seq[k - 1];});
    cout << res << endl;
    return 0;
}