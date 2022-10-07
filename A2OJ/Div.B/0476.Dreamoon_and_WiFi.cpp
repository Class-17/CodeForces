#include <bits/stdc++.h>
using namespace std;

int count(string &s) {
    int p = 0;
    for (auto &ch : s)
        if (ch == '+')      p++;
        else if (ch == '-') p--;
    return p;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    int p1 = count(s1), p2 = count(s2);
    int n = count(begin(s2), end(s2), '?');
    int res = 0;
    for (int i = (1 << n) - 1; i >= 0; --i) {
        int plus = __builtin_popcount(i);
        if (p2 + plus - (n - plus) == p1) res++;
    }
    cout << setprecision(12) << fixed << (n == 0 ? (p1 == p2) : res * 1.0 / (1 << n)) << '\n';
    return 0;
}