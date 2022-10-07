#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    int books = 0, curr = 0;
    for (int i = 0, j = 0; i < n; ++i) {
        while (j < n && curr + arr[j] <= t)
            curr += arr[j++];
        books = max(j - i, books);
        curr -= arr[i];
    }
    cout << books << '\n';
    return 0;
}