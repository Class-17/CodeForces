#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_set<int> horseshoes;
    for (int i = 0; i < 4; i++) {
        int horseshoe; cin >> horseshoe;
        horseshoes.insert(horseshoe);
    }
    cout << 4 - horseshoes.size() << endl;
    return 0;
}