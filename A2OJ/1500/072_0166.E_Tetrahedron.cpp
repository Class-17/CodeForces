#include <bits/stdc++.h>
using namespace std;

constexpr int mod = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int d = 1, abc = 0;
    for (int i = 0; i < n; ++i)
        tie(d, abc) = pair{abc * 3LL % mod, (abc * 2LL + d) % mod};
    cout << d << '\n';
    return 0;
}