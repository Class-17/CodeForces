#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s; cin >> s;
    string words = "hello";
    auto check = [&](auto &check, int p, int idx)->bool {
        if (idx < 0) return true;
        for (int i = p; i >= 0; --i) {
            if (s[i] == words[idx]) 
                return check(check, i - 1, idx - 1); 
        }
        return false;
    };
    cout << (check(check, size(s), 4) ? "YES" : "NO") << endl;
	return 0;
}