#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    vector<int> seq(n);
    for (auto & x : seq) cin >> x;
    sort(begin(seq), end(seq));
    int sum = 0;
    for (int i = 0; i < m && seq[i] < 0; ++i)
        sum -= seq[i];
    cout << sum << endl;
    return 0;
}