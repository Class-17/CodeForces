#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int _; cin >> _;
    while (_--) {
        int a; cin >> a;
        cout << (360 % (180 - a) ? "NO" : "YES") << endl;
    }
    return 0;
}