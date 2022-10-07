#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
    vector<int> cnt(1001);
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        cnt[x]++;
    }
    int max_val = *max_element(begin(cnt), end(cnt));
    cout << (max_val * 2 - n <= 1 ? "YES" : "NO") << endl;
	return 0;
}