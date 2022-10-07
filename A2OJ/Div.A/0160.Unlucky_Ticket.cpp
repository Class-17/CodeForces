#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    int n = size(s);
    for (int i = 0; i < n / 2; ++i)
        if (s[i] >= s[n - i - 1]) return false;
    return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int n; cin >> n;
    string s; cin >> s;
    sort(begin(s), begin(s) + n);
    sort(rbegin(s), rbegin(s) + n);
    string rs = s;
    reverse(begin(rs), end(rs));
    cout << (check(s) || check(rs) ? "YES" : "NO");
	return 0;
}