#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
    for (int i = 0; i < n; ++i)
        cout << n + i << (i + 1 < n ? ' ' : '\n');
	return 0;
}