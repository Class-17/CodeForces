#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    for (int x = 0; x <= min(a, b); ++x) {
        int y = b - x, z = a - x;
        if (y + z == c && min({max(x, y), max(y, z), max(z, x)}) > 0) {
            cout << x << ' ' << y << ' ' << z << '\n';
            return 0;
        }
    }
    cout << "Impossible" << '\n';
    return 0;
}