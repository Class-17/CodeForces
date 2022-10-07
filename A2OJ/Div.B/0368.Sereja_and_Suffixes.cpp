#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> seq(n);
    for (auto &x : seq) cin >> x;
    vector<int> res(n);
    unordered_set<int> st;
    for (int i = n - 1; i >= 0; --i) {
        st.insert(seq[i]);
        res[i] = size(st);
    }
    for (int i = 0; i < m; ++i) {
        int l; cin >> l;
        cout << res[l - 1] << endl;
    }
    return 0;
}