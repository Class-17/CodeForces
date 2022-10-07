#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    long long steps = 0;
    int loc = 1;
    for (int i = 0; i < m; i++) {
        int h; cin >> h;
        steps += loc <= h ? h - loc : (n - (loc - h));
        loc = h;
    }
    cout << steps << endl;
    return 0;
}