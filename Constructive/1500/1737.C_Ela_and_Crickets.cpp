#include <bits/stdc++.h>
using namespace std;

pair<int, int> getCent(int x[], int y[]) {
    int a = (x[0] == x[1] ? x[0] : x[2]);
    int b = (y[0] == y[1] ? y[0] : y[2]);
    return {a, b};
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        int x[3], y[3];
        for (int i = 0; i < 3; ++i)
            cin >> x[i] >> y[i];
        auto [sx, sy] = getCent(x, y);
        int tx, ty;
        cin >> tx >> ty;
        if ((sx == 1 or sx == n) and (sy == 1 or sy == n))
            cout << (sx == tx or sy == ty ? "YES" : "NO") << '\n';
        else {
            if ((sx + sy) % 2 == (tx + ty) % 2)
                cout << (sx % 2 == tx % 2 ? "YES" : "NO") << '\n';
            else
                cout << "YES" << '\n';
        }
    }
    return 0;
}