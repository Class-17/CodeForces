#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int x = 0;
    while (n--) {
        string op; cin >> op;
        if (op[1] == '+') x++;
        else              x--;
    }   
    cout << x << endl;
    return 0;
}