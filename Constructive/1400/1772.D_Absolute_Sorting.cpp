#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        int lo = 0, hi = 1e9;
        for (int i = 0; i + 1 < n; ++i) {
            int midL = arr[i] + arr[i+1] >> 1;
            int midR = arr[i] + arr[i+1] + 1 >> 1;
            if (arr[i] > arr[i+1])
                lo = max(lo, midR);
            if (arr[i] < arr[i+1])
                hi = min(hi, midL);
        }
        cout << (lo <= hi ? lo : -1) << '\n';
    }
    return 0;
}