#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, s;
    cin >> n >> s;
    if (n * 2 <= s) {
        cout << "YES" << '\n';
        for (int i = 0; i < n; ++i)
            cout << s / n + (i < s % n) << " \n"[i + 1 == n];
        cout << 1 << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
    return 0;
}