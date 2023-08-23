#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    if (n - 1 <= m and m <= (n + 1) * 2) {
        string res;
        for (int i = 1; i <= n - 1; ++i) {
            if (m - 2 >= n - i) {
                res += "011";
                m -= 2;
            }
            else {
                res += "01";
                m -= 1;
            }
        }
        res.push_back('0');
        if (m > 0) {
            for (int i = 0; i < 2 and m > 0; ++i) {
                res.insert(begin(res), '1');
                --m;
            }
            for (int i = 0; i < 2 and m > 0; ++i) {
                res.push_back('1');
                --m;
            }
        }
        cout << res << '\n';
    }
    else 
        cout << -1 << '\n';
    return 0;
}