#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x, y;
    cin >> n >> x >> y;
    cout << max(int(ceil(n * y / 100.0 - x)), 0) << '\n';
    return 0;
}