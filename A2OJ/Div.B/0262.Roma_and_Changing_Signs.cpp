#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> seq(n);
    for (auto &x : seq) cin >> x;
    sort(begin(seq), end(seq));
    int cnt = count_if(begin(seq), end(seq), [](const auto &x) {
        return x < 0;});
    for (int i = 0; i < min(cnt, k); ++i)
        seq[i] *= -1;
    sort(begin(seq), end(seq));
    if (max((k - cnt), 0) % 2) seq.front() *= -1;
    cout << accumulate(begin(seq), end(seq), 0) << '\n';
    return 0;
}