#include <bits/stdc++.h>
using namespace std;

pair<int, int> cmp(const string &a, const string &b) {
    int n = size(a), m = size(b);
    for (int i = 0; i < min(n, m); ++i)
        if (a[i] != b[i])
            return {a[i] - 'a', b[i] - 'a'};
    return {n <= m ? -1 : -2, -1};
}

int floyd(int ord[][26]) {
    for (int k = 0; k < 26; ++k)
        for (int i = 0; i < 26; ++i)
            for (int j = 0; j < 26; ++j)
                ord[i][j] |= ord[i][k] & ord[k][j];
    for (int i = 0; i < 26; ++i)
        for (int j = i + 1; j < 26; ++j)
            if (ord[i][j] == 1 and ord[j][i] == 1)
                return 0;
    return 1;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    vector<string> names(n);
    for (auto &x : names) cin >> x;
    int ord[26][26]{};
    for (int i = 0; i + 1 < n; ++i) {
        auto [a, b] = cmp(names[i], names[i+1]);
        if (a == -1) continue;
        if (a == -2) {
            cout << "Impossible" << '\n';
            return 0;
        }
        if (ord[b][a] == 1) {
            cout << "Impossible" << '\n';
            return 0;
        }
        ord[a][b] = 1;
        if (floyd(ord) == 0) {
            cout << "Impossible" << '\n';
            return 0;
        }
    }
    string res(26, 'a');
    iota(begin(res), end(res), 'a');
    int cnt[26]{};
    for (int i = 0; i < 26; ++i)
        for (int j = 0; j < 26; ++j)
            if (ord[i][j]) ++cnt[i];
    sort(begin(res), end(res), [&](const auto &a, const auto &b) {
        return cnt[a - 'a'] > cnt[b - 'a'];
    });
    cout << res << '\n';
    return 0;
}