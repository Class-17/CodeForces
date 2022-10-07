#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int cnt = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        int fingers; cin >> fingers;
        sum += fingers;
    }
    for (int i = 1; i <= 5; i++)
        if ((sum + i) % (n + 1) != 1) cnt++;
    cout << cnt << endl;
    return 0;
}