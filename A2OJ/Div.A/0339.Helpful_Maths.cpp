#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> seq;
    int num;
    while (cin >> num && getchar())
        seq.push_back(num);
    sort(seq.begin(), seq.end());
    for (int i = 0; i < seq.size(); i++) {
        cout << seq[i] << (i < seq.size() - 1 ? '+' : '\n');
    }
    return 0;
}