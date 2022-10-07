#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int time = INT_MIN;
    for (int i = 0; i < n; ++i) {
        int f, t;
        cin >> f >> t;
        time = max(f - max(t - k, 0), time);
    }
    cout << time << endl;
    return 0;
}