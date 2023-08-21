#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    vector<int> arr(n + 1);
    int x = 1;
    for (int i = 2; i <= n; ++i) {
        if (arr[i]) continue;
        for (int j = i; j <= n; j += i)
            arr[j] = x;
        ++x;
    }
    for (int i = 2; i <= n; ++i)
        cout << arr[i] << " \n"[i == n];
    return 0;
}