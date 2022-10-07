#include <bits/stdc++.h>
using namespace std;

constexpr int mod = 1073741824;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, c;
    cin >> a >> b >> c;
    int n = a * b * c;
    vector<int> cnt(n + 1);
    for (int i = 1; i <= n; ++i)
        for (int j = i; j <= n; j += i)
            cnt[j]++;
    int sum = 0;
    for (int x = 1; x <= a; ++x)
        for (int y = 1; y <= b; ++y)
            for (int z = 1; z <= c; ++z)
                sum = (sum + cnt[x * y * z]) % mod;
    cout << sum << endl;
	return 0;
}