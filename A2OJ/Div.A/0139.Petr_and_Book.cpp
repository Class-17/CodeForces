#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> read(7);
    for (auto & r : read) cin >> r;
    int day = -1;
    while (n > 0) {
        day = (day + 1) % 7;
        n -= read[day];
    }
    cout << day + 1 << endl;
    return 0;
}