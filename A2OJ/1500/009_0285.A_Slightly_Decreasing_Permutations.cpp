#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i <= k; ++i)
        cout << k - i + 1 << (i + 1 < n ? ' ' : '\n');
    for (int i = k + 1; i < n; ++i)
        cout << i + 1 << (i + 1 < n ? ' ' : '\n');
    return 0;
}