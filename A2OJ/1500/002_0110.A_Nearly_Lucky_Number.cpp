#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string num; cin >> num;
    int cnt = 0;
    for (auto & digit : num) 
        if(digit == '4' || digit == '7')
            cnt++;
    cout << (cnt == 4 || cnt == 7 ? "YES" : "NO") << endl;
    return 0;
}