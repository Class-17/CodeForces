#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& seq) {
    cout << size(seq);
    for (auto &x : seq)
        cout << ' ' << x;
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a, b, c;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        if (x < 0)      a.push_back(x);
        else if (x > 0) b.push_back(x);
        else            c.push_back(x);
    }
    if (size(a) % 2 == 0) {
        c.push_back(a.back());
        a.pop_back();
    }
    if (b.empty()) {
        for (int i = 0; i < 2; ++i) {
            b.push_back(a.back());
            a.pop_back();
        }
    }
    print(a);
    print(b);
    print(c);
    return 0;
}