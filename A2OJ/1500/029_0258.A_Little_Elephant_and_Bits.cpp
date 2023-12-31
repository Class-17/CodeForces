#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string num; cin >> num;
    auto p = num.find('0');
    if (p == string::npos)
        num.pop_back();
    else
        num.erase(p + num.begin());
    cout << num << endl;
	return 0;
}