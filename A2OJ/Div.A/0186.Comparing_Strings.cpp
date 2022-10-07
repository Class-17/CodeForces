#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s1, s2;
    cin >> s1 >> s2;
    auto check = [&]() {
        if (size(s1) != size(s2)) return false;
        vector<int> idx;
        for (int i = 0; i < size(s1); ++i)
            if (s1[i] != s2[i])
                idx.push_back(i);
        if (size(idx) != 2 && !idx.empty()) return false;
        swap(s1[idx[0]], s1[idx[1]]);
        return s1 == s2;
    };
    cout << (check() ? "YES" : "NO") << endl;
	return 0;
}