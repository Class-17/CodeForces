#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int, int>> points(n);
    for (auto & point : points)
        cin >> point.first >> point.second;
    int cnt = 0;
    for (int i = 0; i < points.size(); i++) {
        bool upper = false, lower = false, left = false, right = false;
        for (int j = 0; j < points.size(); j++) {
            if (i == j) continue;
            if (points[j].first == points[i].first)
                if (points[j].second > points[i].second) right = true;
                else                                     left = true;
            if (points[j].second == points[i].second)
                if (points[j].first > points[i].first) upper = true;
                else                                   lower = true;
        }
        cnt += (upper && lower && left && right);
    }
    cout << cnt << endl;
    return 0;
}