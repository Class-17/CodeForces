#include <bits/stdc++.h>
using namespace std;

char f(const string &s, int i) {
    int j = i + 1 < s.size() ? i + 1 : i;
    for (auto &c : "RGB")
        if (c != s[i] and c != s[j])
            return c;
    return ' ';
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j < n and s[j] == s[i]) ++j;
        cnt += (j - i) / 2;
        char ch = f(s, j - 1);
        for (int k = i + 1; k < j; k += 2)
            s[k] = ch;
        i = j - 1;
    }
    cout << cnt << '\n';
    cout << s << '\n';
    return 0;
}