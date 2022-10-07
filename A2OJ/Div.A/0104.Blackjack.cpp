#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    n -= 10;
    int res = 0;
    if (n > 0 && n < 10 || n == 11) res = 4;
    if (n == 10) res = 15;
    cout << res << endl;
    return 0;
}