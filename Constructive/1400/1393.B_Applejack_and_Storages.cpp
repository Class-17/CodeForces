#include <bits/stdc++.h>
using namespace std;

constexpr int N = 1e5;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    int cnt[N + 1]{};
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        ++cnt[x];
    }
    int q; cin >> q;
    int cnt2 = 0, cnt4 = 0;
    for (int i = 1; i <= N; ++i) {
        cnt2 += cnt[i] / 2;
        cnt4 += cnt[i] / 4;
    }
    for (int i = 0; i < q; ++i) {
        string op;
        int x;
        cin >> op >> x;
        cnt2 -= cnt[x] / 2;
        cnt4 -= cnt[x] / 4;
        if (op == "+") ++cnt[x];
        else           --cnt[x];
        cnt2 += cnt[x] / 2;
        cnt4 += cnt[x] / 4;
        if (cnt4 >= 1 and cnt2 >= 4)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}