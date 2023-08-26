#include <bits/stdc++.h>
using namespace std;

constexpr int N = 1000;

int f(int n) {
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return i;
    return -1;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        vector<int> idx[N]{};
        for (int i = 0; i < n; ++i)
            idx[f(arr[i])].push_back(i);
        int color = 0;
        vector<int> st(n);
        for (int i = 1; i < N; ++i) {
            if (idx[i].empty()) continue;
            ++color;
            for (auto &j : idx[i])
                st[j] = color;
        }
        cout << color << '\n';
        for (int i = 0; i < n; ++i)
            cout << st[i] << " \n"[i + 1 == n];
    }
    return 0;
}