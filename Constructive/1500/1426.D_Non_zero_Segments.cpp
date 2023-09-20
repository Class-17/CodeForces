#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    set<i64> st{0};
    i64 sum = 0,res = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        sum += x;
        if (st.count(sum)) {
           ++res;
           st = set{0LL}; 
           sum = x;
        }
        st.insert(sum);
    }
    cout << res << '\n';
    return 0;
}