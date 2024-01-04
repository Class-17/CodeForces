#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    sort(begin(arr), end(arr));
    vector<int> piles;
    for (auto &x : arr) {
        bool pushed = false;
        for (auto &y : piles) {
            if (x >= y) {
                ++y;
                pushed = true;
                break;
            }
        }
        if (pushed == false)
            piles.push_back(1);
    }
    cout << size(piles) << '\n';
    return 0;
}