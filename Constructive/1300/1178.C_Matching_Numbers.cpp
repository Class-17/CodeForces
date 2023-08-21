#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        if (n & 1) {
            cout << "Yes\n";
            int a = (n + 1) / 2, b = n / 2;
            if (n == 3) a = 1, b = 2;
            for (int i = 1; i <= a; ++i)
                cout << i << ' ' << n * 2 - a + i << '\n';
            for (int i = a + 1; i <= a + b; ++i)
                cout << i << ' ' << i + b << '\n';
        }
        else
            cout << "No\n";
    }
    return 0;
}