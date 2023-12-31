#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n; cin >> n;
    i64 res = 0, sum = 0, prev = 0;
    for (int i = 0; i < n; ++i) {
        int h; cin >> h;
        sum += prev - h;
        if (sum < 0) {
            res -= sum;
            sum = 0;
        }
        prev = h;
    }
    cout << res << '\n';
	return 0;
}