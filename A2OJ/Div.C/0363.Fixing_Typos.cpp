#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    string ans;
    int n = size(s);
    for (auto &ch : s) {
        int len = size(ans);
        bool a = len > 1 && ans[len - 1] == ans[len - 2] && ans[len - 1] == ch;
        bool b = len > 2 && ans[len - 2] == ans[len - 3] && ans[len - 1] == ch;
        if (!a && !b) ans.push_back(ch);
    }
    cout << ans << '\n';
    return 0;
}