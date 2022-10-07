#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> seq;
    auto dfs = [&](auto &dfs, ll num) {
        auto check = [](ll num) {
            int a = 0, b = 0;
            while (num > 0) {
                if (num % 10 == 4) a++;
                else               b++;
                num /= 10;
            }
            return a == b;
        };
        if (check(num))
            seq.push_back(num);
        if (num > 1e9) return;
        dfs(dfs, num * 10 + 4);
        dfs(dfs, num * 10 + 7);
    };
    dfs(dfs, 0);
    sort(begin(seq), end(seq));
    int n; cin >> n;
    cout << *lower_bound(begin(seq), end(seq), n) << '\n';
    return 0;
}