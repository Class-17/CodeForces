#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        cnt += (x + k <= 5);
    }
    cout << cnt / 3 << '\n';
    return 0;
}