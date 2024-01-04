#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    string s; cin >> s;
    deque<int> q;
    int n = size(s);
    int flag = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == 'l')
            flag = 1;
        else
            flag = 0;
        if (flag == 0)
            q.push_front(i);
        else
            q.push_back(i);
    }
    for (auto &x : q)
        cout << x + 1 << '\n';
    return 0;
}