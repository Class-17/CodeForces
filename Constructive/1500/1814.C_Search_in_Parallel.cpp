#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, s1, s2;
        cin >> n >> s1 >> s2;
        vector<int> r(n);
        for (auto &x : r) cin >> x;
        vector<int> id(n);
        iota(begin(id), end(id), 0);
        ranges::sort(id, greater<>(), [&](int i) {return r[i];});
        vector<int> a, b;
        for (auto &i : id) {
            if ((size(a) + 1) * s1 <= (size(b) + 1) * s2)
                a.push_back(i);
            else
                b.push_back(i);
        }
        cout << size(a);
        for (auto &x : a)
            cout << " " << x + 1;
        cout << '\n' << size(b);
        for (auto &x : b)
            cout << " " << x + 1;
        cout << '\n';
    }
    return 0;
}