#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int, int>> exams(n);
    for (auto &[a, b] : exams) cin >> a >> b;
    sort(begin(exams), end(exams));
    int t = 0;
    for (auto &[a, b]: exams)
        t = (b < t ? a : b); 
    cout << t << '\n';
    return 0;
}