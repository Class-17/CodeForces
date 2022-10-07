#include <bits/stdc++.h>
using namespace std;

string rearrange(string s, int k) {
    vector<int> cnt(26);
    for (auto & ch : s) 
        cnt[ch - 'a']++;
    string part, res;
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] % k != 0) return "-1";
        for (int j = 0; j < cnt[i] / k; ++j)
            part.push_back(i + 'a');
    }
    for (int i = 0; i < k; ++i)
        res += part;
    return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int k; cin >> k;
    string s; cin >> s;
    cout << rearrange(s, k) << endl;
	return 0;
}