#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;
        auto check = [&]() {
            int d = *min_element(begin(a), end(a));
            auto b = a;
            sort(begin(b), end(b));
            for (int i = 0; i < n; ++i)
                if (a[i] % d && a[i] != b[i]) return false;
            return true;
        };
        cout << (check() ? "YES" : "NO") << '\n';
    }
    return 0;
}