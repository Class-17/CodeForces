#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        vector<int> idx(n);
        iota(begin(idx), end(idx), 0);
        sort(begin(idx), end(idx), [&](const auto &a, const auto &b) {
            return arr[a] > arr[b];
        });
        vector<int> a(n + 1), b(n + 1);
        vector<int> resA(n + 1), resB(n + 1);
        auto check = [&]() {
            for (auto &i : idx) {
                int x = arr[i];
                if (a[x] == 0) {
                    a[x] = 1;
                    resA[i] = x;
                }
                else if (b[x] == 0) {
                    b[x] = 1;
                    resB[i] = x;
                }
                else
                    return false;
            }
            vector<int> remA, remB;
            for (int i = 1; i <= n; ++i)
                if (a[i] == 0) remA.push_back(i);
            for (int i = 1; i <= n; ++i)
                if (b[i] == 0) remB.push_back(i);
            for (auto &i : idx) {
                if (resA[i] == 0) {
                    resA[i] = remA.back();
                    remA.pop_back();
                }
                if (resB[i] == 0) {
                    resB[i] = remB.back();
                    remB.pop_back();
                }
            }
            for (int i = 0; i < n; ++i)
                if (max(resA[i], resB[i]) != arr[i]) return false;
            return true;
        };
        if (check()) {
            cout << "YES\n";
            for (int i = 0; i < n; ++i)
                cout << resA[i] << " \n"[i + 1 == n];
            for (int i = 0; i < n; ++i)
                cout << resB[i] << " \n"[i + 1 == n];
        }
        else
            cout << "NO\n";
    }
    return 0;
}