#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    vector<int> c(n), p(n), ord1(n);
    for (int i = 0; i < n; ++i)
        cin >> c[i] >> p[i];
    iota(begin(ord1), end(ord1), 0);
    sort(begin(ord1), end(ord1), [&](const auto &a, const auto &b) {
        return c[a] > c[b];
    });
    int k; cin >> k;
    vector<int> r(k), ord2(k);
    for (auto &x : r) cin >> x;
    iota(begin(ord2), end(ord2), 0);
    sort(begin(ord2), end(ord2), [&](const auto &a, const auto &b) {
        return r[a] > r[b];
    });
    int j = 0;
    vector<int> res(k, - 1);
    for (auto &i : ord1) {
        if (j < k and r[ord2[j]] >= c[i]) {
            res[ord2[j++]] = i;
        }
        else {
            int min_idx = j - 1;
            for (int idx = j - 1; idx >= 0; --idx)
                if (res[ord2[idx]] == -1 or p[res[ord2[idx]]] < p[res[ord2[min_idx]]])
                    min_idx = idx;
            if (min_idx >= 0 and p[i] > p[res[ord2[min_idx]]])
                res[ord2[min_idx]] = i;
        }
    }
    int cnt = 0, sum = 0;
    for (int i = 0; i < k; ++i)
        if (res[i] >= 0) {
            ++cnt;
            sum += p[res[i]];
        }
    cout << cnt << ' ' << sum << '\n';
    for (int i = 0; i < k; ++i)
        if (res[i] >= 0)
            cout << res[i] + 1 << ' ' << i + 1 << '\n';
    return 0;
}