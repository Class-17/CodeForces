#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int leftOpen = 0, rightOpen = 0;
    for (int i = 0; i < n; i++) {
        int l, r; cin >> l >> r;
        leftOpen += l;
        rightOpen += r;
    }
    cout << min(leftOpen, n - leftOpen) + 
            min(rightOpen, n - rightOpen) << endl;
    return 0;
}