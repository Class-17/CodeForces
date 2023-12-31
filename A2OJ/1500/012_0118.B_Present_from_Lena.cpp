#include <bits/stdc++.h>
using namespace std;

void print(int n, int m) {
    for (int i = 0; i < m; ++i)
        cout << "  ";
    for (int i = 0; i < n; ++i)
        cout << i << ' ';
    cout << n;
    for (int i = n - 1; i >= 0; --i)
        cout << ' ' << i;
    cout << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
    for (int i = 0; i <= n; ++i)
        print(i, n - i);
    for (int i = n - 1; i >= 0; --i)
        print(i, n - i);
	return 0;
}