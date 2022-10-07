#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int maxP = -1, minP = INT_MAX, cnt = 0;
    for (int i = 0; i < n; i++) {
        int perfor; cin >> perfor;
        if (i == 0)  {
            maxP = minP = perfor;
            continue;
        }
        if (perfor > maxP) {
            maxP = perfor;
            cnt++;
        }
        if (perfor < minP) {
            minP = perfor;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}