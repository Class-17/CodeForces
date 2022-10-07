#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    cout << (any_of(begin(s), end(s), [&](const auto &ch) {
        return ch == 'H' || ch == 'Q' || ch == '9';}) ? "YES" : "NO") << endl;
    return 0;
}