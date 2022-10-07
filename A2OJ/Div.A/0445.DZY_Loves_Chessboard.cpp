#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        string line; cin >> line;
        for (int j = 0; j < m; ++j)
            if (line[j] == '.')
                if ((i + j) & 1) line[j] = 'W';
                else             line[j] = 'B';
        cout << line << endl;
    }
	return 0;
}