#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> heights(n);
    for (auto & height : heights) cin >> height;
    vector<int> ans = {abs(heights.front() - heights.back()), heights.size() - 1, 0};
    for (int i = 0; i < heights.size() - 1; i++)
        if (abs(heights[i] - heights[i + 1]) < ans[0]) {
            ans[0] = abs(heights[i] - heights[i + 1]);
            ans[1] = i;
            ans[2] = i + 1;
        }
    cout << ans[1] + 1 << ' ' << ans[2] + 1 << endl; 
    return 0;
}