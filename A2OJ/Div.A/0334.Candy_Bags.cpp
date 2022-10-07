#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n * n / 2; i += n / 2)
        for (int j = i; j < i + n / 2; ++j)
            cout << j << ' ' << n * n - j + 1 
                 << (j + 1 < i + n / 2 ? ' ' : '\n');
    return 0;
}