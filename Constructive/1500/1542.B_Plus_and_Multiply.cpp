#include <bits/stdc++.h>
using namespace std;

bool check(int n, int a, int b) {
    if (a == 1) return (n - 1) % b == 0;
    long long x = 1;
    while (x <= n) {
        if (x % b == n % b) return true;
        x *= a;
    }
    return false;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, a, b;
        cin >> n >> a >> b;
        cout << (check(n, a, b) ? "Yes" : "No") << '\n';
    }
    return 0;
}