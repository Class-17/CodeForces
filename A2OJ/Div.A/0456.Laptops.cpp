#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int, int>> seq(n);
    for (auto &[a, b] : seq) cin >> a >> b;
    sort(begin(seq), end(seq));
    auto check = [&]() {
        for (int i = 1; i < n; ++i)
            if (seq[i - 1].first < seq[i].first && 
                seq[i - 1].second > seq[i].second) return true;
        return false;
    };
    cout << (check() ? "Happy Alex" : "Poor Alex") << '\n';
    return 0;
}