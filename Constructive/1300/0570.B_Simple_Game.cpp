#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    cout << (m > n / 2 ? max(m - 1, 1) : m + 1) << '\n';
    return 0;
}