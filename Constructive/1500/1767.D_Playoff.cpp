#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    string s; cin >> s;
    int lo = count(begin(s), end(s), '0');
    int hi = count(begin(s), end(s), '1');
    for (int i = (1 << hi); i <= (1 << n) - (1 << lo) + 1; ++i)
        cout << i << ' ';
    return 0;
}