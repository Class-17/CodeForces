#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;
        auto check = [&]() {
            int cnt = count(begin(b), end(b), 0);
            if (cnt > 0 && cnt < n) return true; 
            for (int i = 1; i < n; ++i)
                if (a[i] < a[i - 1]) return false;
            return true;
        };
        cout << (check() ? "Yes" : "No") << '\n';
    }
    return 0;
}