#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    unordered_map<string, int> cnt;
    while (n--) {
        string team; cin >> team;
        cnt[team]++;
    }
    cout << max_element(begin(cnt), end(cnt), [](auto a, auto b) {
            return a.second < b.second;})->first << endl;
    return 0;
}