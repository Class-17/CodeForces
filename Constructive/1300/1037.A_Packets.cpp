#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    int i = 0;
    while (n > 0) {
        n -= 1 << i;
        ++i;
    }
    cout << i << endl;
    return 0;
}