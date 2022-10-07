#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> cnt(26);
    string s; cin >> s;
    for (auto &ch : s)
        cnt[ch - 'A']++;
    sort(rbegin(cnt), rend(cnt));
    long long coins = 0;
    for (int i = 0; i < 26 && k > 0; ++i) {
        long long minus = min(cnt[i], k);
        coins += minus * minus;
        k -= minus;
    }
    cout << coins << endl;
    return 0;
}