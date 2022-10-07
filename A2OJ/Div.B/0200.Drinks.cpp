#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    double sum = 0, curr;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        sum += curr;
    }
    cout << sum / n << endl;
    return 0;
}