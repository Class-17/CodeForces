#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
        cout << (a[i] != b[i] ? '1' : '0');
    cout << endl;
    return 0;
}