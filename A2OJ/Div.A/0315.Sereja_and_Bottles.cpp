#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i] >> b[i];
    auto check = [&](int p) {
        for (int i = 0; i < n; ++i)
            if (i != p && a[p] == b[i]) return false;
        return true;
    };
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += check(i);
    cout << sum << endl;
    return 0;
}