#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r, g, b;
    cin >> r >> g >> b;
    int cnt = 0;
    for (int i = 0; i <= min({r, g, b, 2}); ++i)
        cnt = max(i + (r - i) / 3 + (g - i) / 3 + (b - i) / 3, cnt);
    cout << cnt << '\n';
    return 0;
}