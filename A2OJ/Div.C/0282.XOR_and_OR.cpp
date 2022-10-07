#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    int x = 0, y = 0;
    for (auto &ch : a) x |= (ch == '1');
    for (auto &ch : b) y |= (ch == '1');
    cout << (size(a) == size(b) && x == y ? "YES" : "NO") << '\n';
    return 0;
}