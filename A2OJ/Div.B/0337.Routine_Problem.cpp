#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    auto print = [](int a, int b) {
        cout << a / __gcd(a, b) << '/' << b / __gcd(a, b) << '\n';
    };
    if (a * d < b * c)
        print(b * c - a * d, b * c);
    else
        print(a * d - c * b, a * d);
    return 0;
}