#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int lowCnt = 0;
    for (auto & c : s)
        if(c > 'Z') lowCnt++;
    if(lowCnt * 2 >= s.size())
        for (auto& c : s) cout << char(tolower(c));
    else  
        for (auto& c : s) cout << char(toupper(c));
    cout << endl;
    return 0;
}