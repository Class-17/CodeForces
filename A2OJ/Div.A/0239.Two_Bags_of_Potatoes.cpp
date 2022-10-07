#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int y, k, n;
    cin >> y >> k >> n;
    vector<int> seq;
    for (int x = ceil(y * 1.0 / k) * k - y; x + y <= n; x += k)
        if (x > 0) seq.push_back(x);
    if (seq.empty()) seq = {-1};
    for (int i = 0; i < size(seq); ++i)
        cout << seq[i] << (i + 1 < size(seq) ? ' ' : '\n');
	return 0;
}