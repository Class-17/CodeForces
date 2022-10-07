#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string name; cin >> name;
    unordered_set<char> letters;
    for (auto& letter : name)
        letters.insert(letter);
    cout << (letters.size() % 2 == 0 ? "CHAT WITH HER!" :
             "IGNORE HIM!") << endl;
    return 0;
}