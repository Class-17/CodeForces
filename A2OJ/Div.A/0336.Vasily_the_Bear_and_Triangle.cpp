#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    int val = abs(x) + abs(y);
    pair<int, int> p1(val * (x / abs(x)) , 0);
    pair<int, int> p2(0, val * (y / abs(y)));
    if (p1.first > p2.first) swap(p1, p2);
    cout << p1.first << ' ' << p1.second << ' '
         << p2.first << ' ' << p2.second << endl;
    return 0;
}