#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n; cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    auto b = a;
    sort(begin(b), end(b));
    int cnt = 0;
    for (int i = 0; i < n; ++i)
        cnt += (a[i] != b[i]);
    cout << (cnt <= 2 ? "YES" : "NO") << '\n';
	return 0;
}