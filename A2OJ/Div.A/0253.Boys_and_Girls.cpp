#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    int n, m;
    cin >> n >> m;
    char a = 'B', b = 'G';
    if (n < m) {
        swap(a, b);
        swap(n, m);
    }
    while (n > 0 || m > 0) {
        if (n-- > 0) cout << a;
        if (m-- > 0) cout << b;
    }
    cout << endl;
	return 0;
}