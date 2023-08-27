#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    vector<int> res;
    while (n > 0) {
        int i = 1, curr = 0, x = n;
        while (x > 0) {
            if (x % 10 > 0)
                curr += i;
            x /= 10;
            i *= 10;
        }
        res.push_back(curr);
        n -= curr;
    }
    int m = size(res);
    cout << m << '\n';
    for (int i = 0; i < m; ++i)
        cout << res[i] << " \n"[i + 1 == m];
    return 0;
}