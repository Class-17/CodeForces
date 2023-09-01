#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> arr(n);
        priority_queue<pii> pq;
        for (int i = 1; i <= n; ++i) {
            int x; cin >> x;
            if (x > 0)
                pq.emplace(x, i);
        }
        vector<pii> res;
        while (size(pq) > 1) {
            auto [c1, p1] = pq.top(); pq.pop();
            auto [c2, p2] = pq.top(); pq.pop();
            res.emplace_back(p1, p2);
            if (c1 > 1)
                pq.emplace(c1 - 1, p1);
            if (c2 > 1)
                pq.emplace(c2 - 1, p2);
        }
        cout << size(res) << '\n';
        for (auto &[a, b] : res)
            cout << a << ' ' << b << '\n';
    }
    return 0;
}