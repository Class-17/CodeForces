#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s; cin >> s;
    auto is_vowel = [](char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || ch == 'y') return true;
        return false;
    };
    string res;
    for (auto & ch : s) {
        if (is_vowel(tolower(ch))) continue;
        res += string(".") + char(tolower(ch));
    }
    cout << res << endl;
	return 0;
}