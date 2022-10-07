#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, k;
    cin >> n >> k;
    vector<int> seq(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> seq[i];
    for (int i = 1; i <= n; ++i)
        seq[i] += seq[i - 1];
    int res = 0;
    for (int i = 0; i + k <= n; ++i)
        if (seq[i + k] - seq[i] < seq[res + k] - seq[res])
            res = i;
    cout << res + 1 << endl;
	return 0;
}