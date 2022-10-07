#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') cout << 0;
        else {
            if (s[i + 1] == '.') cout << 1;
            else                 cout << 2;
            i++;
        }
    }
    cout << endl;
    return 0;
}