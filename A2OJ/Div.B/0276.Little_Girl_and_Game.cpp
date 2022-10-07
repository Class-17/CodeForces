#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s; cin >> s;
    vector<int> cnt(26);
    for (auto &x : s) cnt[x - 'a']++;
    int odd = 0;
    for (auto &x : cnt) odd += x % 2;
    cout << (odd % 2 || !odd ? "First" : "Second") << endl;
	return 0;
}