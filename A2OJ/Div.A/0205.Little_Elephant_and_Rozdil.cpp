#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    pair<int, int> ans(INT_MAX, 0);
    for (int i = 0; i < n; i++) {
        int time; cin >> time;
        if (time < ans.first) {
            ans.first = time;
            ans.second = i + 1;
        }
        else if (time == ans.first) ans.second = 0;
    }
    cout << (ans.second ? to_string(ans.second) : "Still Rozdil") << endl;
    return 0;
}