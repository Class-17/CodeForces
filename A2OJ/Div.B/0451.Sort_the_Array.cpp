#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    vector<int> b(begin(a), end(a));
    sort(begin(b), end(b));
    int l = 0, r = n - 1;
    while (l < n && a[l] == b[l]) l++;
    while (r >= 0 && a[r] == b[r]) r--;
    auto check = [&](){
        for (int i = r; i > l; --i)
            if (a[i] > a[i - 1]) return false;
        return true;
    };
    if (l >= r) l = r = 0;
    if (check())
        cout << "yes\n" << l + 1 << ' ' << r + 1 << endl;
    else
        cout << "no\n";
    return 0;
}