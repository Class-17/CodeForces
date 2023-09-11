#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int x; cin >> x;
        int y = x / 2;
        if (x % 2 == 0 and ((x + y) ^ y) == x)
            cout << x + y << ' ' << y << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}