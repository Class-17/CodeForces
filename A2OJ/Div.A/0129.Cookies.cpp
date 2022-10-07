#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int odd = 0, even = 0, sum = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        odd += x % 2;
        even += !(x % 2);
        sum += x;
    }
    cout << (sum % 2 ? odd : even) << endl;
    return 0;
}