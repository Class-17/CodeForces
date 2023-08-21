#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int a, b, x;
    cin >> a >> b >> x;
    string s;
    if (a >= b) {
        for (int i = 0; i < b and i < x / 2; ++i)
            s += "01";
        int len = size(s) / 2;
        if (x & 1) {
            s += string(a - len, '0');
            s += string(b - len, '1');
        }
        else {
            s += string(b - len, '1');
            s += string(a - len, '0');
        }
    }
    else {
        for (int i = 0; i < a and i < x / 2; ++i)
            s += "10";
        int len = size(s) / 2;
        if (x & 1) {
            s += string(b - len, '1');
            s += string(a - len, '0');
        }
        else {
            s += string(a - len, '0');
            s += string(b - len, '1');
        }
    }
    cout << s << '\n';
    return 0;
}