#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k;
    cin >> n >> k;
    vector<int> seq(n);
    for (auto &x : seq) cin >> x;
    int p = n - 1;
    while (p >= 0 && seq[p] == seq[k - 1]) p--;
    cout << (p <= k - 1 ? p + 1 : -1) << endl;
	return 0;
}