#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> candies(n);
    queue<int> childs;
    for (int i = 0; i < candies.size(); i++) {
        cin >> candies[i];
        childs.push(i);
    }
    while (childs.size() > 1) {
        auto child = childs.front();
        childs.pop();
        candies[child] -= m;
        if (candies[child] > 0) childs.push(child);
    }
    cout << childs.front() + 1 << endl;   
    return 0;
}