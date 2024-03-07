#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> itvs(m);
        for (auto &[l, r] : itvs)
            cin >> l >> r;
        vector<int> orderA(m), orderB(m), isFeed(m);;
        iota(begin(orderA), end(orderA), 0);
        iota(begin(orderB), end(orderB), 0);
        ranges::sort(orderA, {}, [&](int x){return itvs[x].second;});
        ranges::sort(orderB, {}, [&](int x){return itvs[x].first;});
        int res = 0, last = 0, j = 0;
        for (auto &i : orderA) {
            if (isFeed[i] or itvs[i].first <= last) continue;
            int step = itvs[i].second;
            while (j < m and itvs[orderB[j]].first <= step) {
                if (!isFeed[orderB[j]] and itvs[orderB[j]].second >= step) {
                    isFeed[orderB[j]] = 1;
                    ++res;
                    last = max(last, itvs[orderB[j]].second);
                }
                ++j;
            }
        }
        cout << res << '\n';
    }
    return 0;
}