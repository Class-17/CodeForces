#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    sort(rbegin(arr), rend(arr));
    int sum = accumulate(begin(arr), end(arr), 0);
    partial_sum(begin(arr), end(arr), begin(arr));
    auto p = lower_bound(begin(arr), end(arr), sum / 2 + 1); 
    cout << p - begin(arr) + 1 << '\n';
	return 0;
}