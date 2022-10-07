#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, a, b;
    cin >> n >> a >> b;
    cout << min(n - a, b + 1) << endl;
	return 0;
}