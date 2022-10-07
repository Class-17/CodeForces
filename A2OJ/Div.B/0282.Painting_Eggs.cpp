#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int sa = 0, sg = 0;
    string res;
    for (int i = 0; i < n; ++i) {
        int a, g;
        cin >> a >> g;
        if (abs(sa + a - sg) < abs(sa - sg - g)) {
            res.push_back('A');
            sa += a;
        }
        else {
            res.push_back('G');
            sg += g;
        }
    }
    cout << (abs(sa - sg) <= 500 ? res : "-1") << '\n';
    return 0;
}