#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    multiset<int> lo, hi;
    int q; cin >> q;
    for (int i = 0; i < q; ++i) {
        string op;
        int l, r;
        cin >> op >> l >> r;
        if (op == "+") {
            lo.insert(l);
            hi.insert(r);
        }
        else {
            lo.erase(lo.find(l));
            hi.erase(hi.find(r));
        }
        if (size(lo) < 2 or *rbegin(lo) <= *begin(hi))
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}