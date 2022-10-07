#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    auto check = [&](int p) {
        int u = 0, v = 0;
        while (a % p == 0) {a /= p; u++;}
        while (b % p == 0) {b /= p; v++;}
        return abs(u - v);
    };
    int sum = check(2) + check(3) + check(5);
    cout << (a == b ? sum : -1) << '\n';
    return 0;
}