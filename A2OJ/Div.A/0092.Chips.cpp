#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    m %= n * (n + 1) / 2;
    for (int i = 1; i <= n && m >= i; ++i)
        m -= i;
    cout << m << endl;
    return 0;
}