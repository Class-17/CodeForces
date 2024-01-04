#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    vector<int> toR(n), toL(n);
    for (int i = 0; i < n; ++i) {
        int j = i + 1;
        while (j < n and arr[j] >= arr[j - 1])
            ++j;
        for (int k = i; k < j; ++k)
            toR[k] = j - 1;
        i = j - 1;
    }
    for (int i = 0; i < n; ++i) {
        int j = i + 1;
        while (j < n and arr[j] <= arr[j - 1])
            ++j;
        for (int k = i; k < j; ++k)
            toL[k] = i;
        i = j - 1;
    }
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        if (toR[l - 1] >= toL[r - 1])
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}