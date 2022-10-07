#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int cap = 0, size = 0;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        size = size - a + b;
        cap = max(size, cap);
    }
    cout << cap << endl;
    return 0;
}