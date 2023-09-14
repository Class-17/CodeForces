#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n0, n1, n2;
        cin >> n0 >> n1 >> n2;
        string res;
        for (int i = 0; i < n1; i += 2)
            res += "01";
        res = string(n0, '0') + res + string(n2, '1');
        if (n1 + n2 == 0)
            res = '0' + res;
        if (n0 + n1 == 0)
            res = '1' + res;
        if (n1 % 2 == 0 and n1 > 0)
            res = '1' + res;
        cout << res << '\n';
    }
    return 0;
}