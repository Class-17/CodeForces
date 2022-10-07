#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int cnt[128] = {0};
    for (auto &x : s1) cnt[x]++;
    auto check = [&]() {
        for (auto &x : s2)
            if (--cnt[x] < 0 && x != ' ') return "NO";
        return "YES";
    };
    cout << check() << endl;
	return 0;
}