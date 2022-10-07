#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string pos; cin >> pos;
    auto check = [&]()->bool {
        for (int i = 0; i < size(pos); ++i)
            if (pos[i] == '1' && pos.find("1111111", i) == i ||
                pos[i] == '0' && pos.find("0000000", i) == i) return true;
        return false;
    };
    cout << (check() ? "YES" : "NO") << endl;
	return 0;
}