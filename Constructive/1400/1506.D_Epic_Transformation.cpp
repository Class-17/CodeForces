#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        map<int, int> mp;
        for(auto &x : arr)
            ++mp[x];
        priority_queue<int> pq;
        for (auto &[x, c] : mp)
            pq.push(c);
        while (size(pq) > 1) {
            auto a = pq.top(); pq.pop();
            auto b = pq.top(); pq.pop();
            if (a - 1 > 0) pq.push(a - 1);
            if (b - 1 > 0) pq.push(b - 1);
        }
        cout << (pq.empty() ? 0 : pq.top()) << '\n';
    }
    return 0;
}