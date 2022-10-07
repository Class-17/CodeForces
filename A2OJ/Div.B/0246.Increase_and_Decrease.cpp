#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
    vector<int> seq(n);
    for (auto &x : seq) cin >> x;
    auto [avg, rem] = div(accumulate(begin(seq), end(seq), 0), n);
    cout << (rem == 0 ? n : n - 1) << endl;
	return 0;
}