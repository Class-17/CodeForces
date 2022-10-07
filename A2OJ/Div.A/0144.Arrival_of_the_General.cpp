#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> seq(n);
    for (auto &x : seq) cin >> x;
    int x = max_element(begin(seq), end(seq)) - begin(seq);
    int y = min_element(rbegin(seq), rend(seq)) - rbegin(seq);
    cout << x + y - (x + y >= n) << endl;
    return 0;
}