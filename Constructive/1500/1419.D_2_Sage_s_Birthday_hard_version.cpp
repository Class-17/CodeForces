#include <bits/stdc++.h>
using namespace std;
    
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    sort(begin(arr), end(arr));
    vector<int> res(n);
    for (int i = 0; i < n / 2; ++i)
        res[i * 2 + 1] = arr[i]; 
    for (int i = n / 2; i < n; ++i)
        res[(i - (n / 2)) * 2] = arr[i];
    int cnt = 0;
    for (int i = 1; i + 1 < n; i += 1)
        cnt += (res[i - 1] > res[i] and res[i] < res[i + 1]);
    cout << cnt << '\n';
    for (int i = 0; i < n; ++i)
        cout << res[i] << " \n"[i + 1 == n];
    return 0;
}