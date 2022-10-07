#include <bits/stdc++.h>
using namespace std;

bool getPerfect(vector<int>& permu) {
    if (permu.size() % 2 == 1) return false;
    for (int i = 0; i + 1 < permu.size() ; i += 2)
        swap(permu[i], permu[i + 1]);
    return true;
}

int main()
{
    int n; cin >> n;
    vector<int> permu(n);
    iota(permu.begin(), permu.end(), 1);
    if(getPerfect(permu))
        for (int i = 0; i < permu.size(); i++)
            cout << permu[i] << 
                    (i < permu.size() - 1 ? ' ' : '\n');
    else cout << -1 << endl;
    return 0;
}