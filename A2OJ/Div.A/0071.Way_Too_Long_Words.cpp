#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        if (s.size() > 10) 
            s.replace(1, s.size() - 2, to_string(s.size() - 2));
        cout << s << endl;
    }
    return 0;
}