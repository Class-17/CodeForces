#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n;
    map<int ,int> seq;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        seq[num] = i;
    }
    cin >> m;
    long long cntA = 0, cntB = 0;
    while (m--) {
        int num; cin >> num;
        cntA += seq[num] + 1;
        cntB += n - seq[num];
    }
    cout << cntA << " " << cntB << endl;
    return 0; 
}