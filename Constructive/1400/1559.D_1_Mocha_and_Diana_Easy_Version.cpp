#include <bits/stdc++.h>
using namespace std;

template<class T>
class UnionFind {
private:
    vector<T> dsu;
public:
    UnionFind(int n = 0) : dsu(n, -1) {}

    T find(T x) {
        if (dsu[x] < 0) return x;
        return dsu[x] = find(dsu[x]);
    }

    bool same(T x, T y) {
        return find(x) == find(y);
    }

    bool unite(T x, T y) {
        x = find(x), y = find(y);
        if (x == y) return false;
        if (dsu[x] > dsu[y]) swap(x, y);
        dsu[x] += dsu[y];
        dsu[y] = x;
        return true;
    }
};

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, ma, mb;
    cin >> n >> ma >> mb;
    UnionFind<int> dsuA(n + 1), dsuB(n + 1);
    for (int i = 0; i < ma; ++i) {
        int u, v;
        cin >> u >> v;
        dsuA.unite(u, v);
    }
    for (int i = 0; i < mb; ++i) {
        int u, v;
        cin >> u >> v;
        dsuB.unite(u, v);
    }
    vector<pair<int, int>> res;
    for (int i = 1; i <= n; ++i)
        for (int j = i + 1; j <= n; ++j)
            if (!dsuA.same(i, j) and !dsuB.same(i, j)) {
                dsuA.unite(i, j);
                dsuB.unite(i, j);
                res.emplace_back(i, j);
            }
    cout << size(res) << '\n';
    for (auto &[u, v] : res)
        cout << u << ' ' << v << '\n';
    return 0;
}