#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    if (n != 1)
        cout << n << ' ' << n + 1 << ' ' << n * (n + 1) << '\n';
    else
        cout << -1 << '\n';
    return 0;
}