#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    int cnt = 0, op = 1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == i)           cnt++;
        else if (arr[arr[i]] == i) op = 2;
    }
    cout << cnt + (cnt < n ? op : 0) << '\n';
    return 0;
}