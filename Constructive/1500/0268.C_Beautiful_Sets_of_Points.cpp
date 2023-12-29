#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int k = min(n, m);
    cout << k + 1 << '\n';
    for (int i = 0; i <= k; ++i)
        cout << k - i << ' ' << i << '\n';
    return 0;
}