#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    int max_val = *max_element(begin(a), end(a));
    int min_val = *min_element(begin(a), end(a));
    long long max_num = count(begin(a), end(a), max_val);
    long long min_num = count(begin(a), end(a), min_val);
    long long pairs;
    if (max_val > min_val)
        pairs = max_num * min_num;
    else
        pairs = max_num * (max_num - 1) / 2;
    cout << max_val - min_val << " " << pairs << endl;
	return 0;
}