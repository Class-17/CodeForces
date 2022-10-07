#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 100;

int dsu[maxn];

int find(int x) {
    if (dsu[x] < 0) return x;
    return dsu[x] = find(dsu[x]);
}

void unite(int x, int y) {
    x = find(x), y = find(y);
    if (x == y) return;
    if (dsu[x] > dsu[y]) swap(x, y);
    dsu[x] += dsu[y];
    dsu[y] = x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> seq[maxn + 1];
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int len; cin >> len;
        for (int j = 0; j < len; ++j) {
            int x; cin >> x;
            seq[x].push_back(i);
        }
        sum += len;
    }
    memset(dsu, -1, sizeof dsu);
    for (auto &x : seq)
        for (int i = 1; i < size(x); ++i)
            unite(x[0], x[i]);
    int cnt = 0;
    for (int i = 0; i < n; ++i)
        cnt += (dsu[i] < 0);
    cout << (sum == 0 ? n : cnt - 1) << '\n';
    return 0;
}