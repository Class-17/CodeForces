#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n; cin >> n;
    vector<int> a(n), b(n);
    bool change = false;
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
        if ((a[i] % 2) ^ (b[i] % 2))
            change = true;
    }
    int sum_a = accumulate(begin(a), end(a), 0);
    int sum_b = accumulate(begin(b), end(b), 0);
    int res = 0;
    if (sum_a % 2 || sum_b % 2)
        if (sum_a % 2 && sum_b % 2 && change)
            res = 1;
        else
            res = -1;
    cout << res << endl;
	return 0;
}