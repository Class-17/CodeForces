#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> damages(4);
    int d;
    for (auto & damage : damages) cin >> damage;
    cin >> d;
    vector<bool> dragons(d);
    for (auto& damage : damages)
         for (int i = 0; i < dragons.size(); i++)
            if ((i + 1) % damage == 0) dragons[i] = true;
    cout << count(dragons.begin(), dragons.end(), true) << endl;
    return 0;
}