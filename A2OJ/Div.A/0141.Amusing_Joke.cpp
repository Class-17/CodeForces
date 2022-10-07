#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string nameA, nameB, pile;
    cin >> nameA >> nameB >> pile;
    unordered_map<char, int> cnt;
    for (auto & letter : nameA + nameB)
        cnt[letter]++;
    for (auto & letter : pile)
        cnt[letter]--;
    cout << (all_of(cnt.begin(), cnt.end(), 
            [](auto& n) {return n.second == 0;}) ?
             "YES" : "NO") << endl;
    return 0;
}