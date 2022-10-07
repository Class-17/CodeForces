#include <bits/stdc++.h>
using namespace std;

bool isCorrect(string& s, string& t) {
    if (s.size() != t.size()) return false;
    for (int i = 0, j = t.size() - 1; i < s.size(); i++, j--)
        if (s[i] != t[j]) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    cout << (isCorrect(s, t) ? "YES" : "NO") << endl;
    return 0;
}