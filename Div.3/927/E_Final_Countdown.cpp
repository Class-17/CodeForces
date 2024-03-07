#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        string s; cin >> s;
        reverse(begin(s), end(s));
        while (size(s) > 1 and s.back() == '0')
            s.pop_back();
        vector<int> res;
        for (auto &ch : s)
            res.push_back(ch - '0');
        n = size(res);
        for (int i = n - 2; i >= 0; --i)
            res[i] += res[i + 1];
        int carry = 0;
        for (int i = 0; i < n; ++i) {
            res[i] += carry;
            carry = res[i] / 10;
            res[i] %= 10;
        }
        while (carry > 0) {
            res.push_back(carry % 10);
            carry /= 10;
        }
        n = size(res);
        for (int i = n - 1; i >= 0; --i)
            cout << res[i];
        cout << '\n';
    }
    return 0;
}