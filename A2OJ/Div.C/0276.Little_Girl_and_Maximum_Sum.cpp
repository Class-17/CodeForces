#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (auto &x : arr) cin >> x;
    sort(begin(arr), end(arr));
    vector<int> diff(n + 1);
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        diff[l - 1]++;
        diff[r]--;
    }
    for (int i = 1; i < n; ++i)
        diff[i] += diff[i - 1];
    diff.pop_back();
    sort(begin(diff), end(diff));
    ll sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i] * diff[i];
    cout << sum << '\n';
    return 0;
}