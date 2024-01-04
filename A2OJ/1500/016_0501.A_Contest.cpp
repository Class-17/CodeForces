#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double x = max(3*a/10.0, a-a/250.0*c);
    double y = max(3*b/10.0, b-b/250.0*d);
    if (x > y)
        cout << "Misha" << '\n';
    else if (x < y)
        cout << "Vasya" << '\n';
    else
        cout << "Tie" << '\n';
    return 0;
}