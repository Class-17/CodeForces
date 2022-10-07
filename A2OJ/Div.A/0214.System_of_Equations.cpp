#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int cnt = 0;
    for (int i = 0; i <= 100; ++i)
        for (int j = 0; j <= 100; ++j)
            cnt += (i * i + j == n && i + j * j == m);
    cout << cnt << endl;
    return 0;
}