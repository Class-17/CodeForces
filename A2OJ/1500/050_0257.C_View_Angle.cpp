#include <bits/stdc++.h>
using namespace std;

constexpr double PI = acos(-1);
constexpr double EPS = 1e-8;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n; cin >> n;
    vector<double> seq(n);
    for (auto &d : seq) {
        int x, y;
        cin >> x >> y;
        d = atan2(y, x);
        if (d < -EPS) d += PI * 2;
    }
    sort(begin(seq), end(seq));
    double res = seq[n-1] - seq[0];
    for (int i = 1; i < n; ++i)
        res = min(res, PI * 2 - (seq[i] - seq[i-1]));
    cout << setprecision(10) << fixed << res / PI * 180 << '\n';
	return 0;
}