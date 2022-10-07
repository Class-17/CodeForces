#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    vector<vector<int>> g(5, vector<int>(5));
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j)
            cin >> g[i][j];
    vector<int> seq = {0, 1, 2, 3, 4};
    int res = 0;
    do {
        int curr = g[seq[0]][seq[1]] + g[seq[1]][seq[0]];
        curr += g[seq[1]][seq[2]] + g[seq[2]][seq[1]];
        curr += (g[seq[2]][seq[3]] + g[seq[3]][seq[2]]) * 2;
        curr += (g[seq[3]][seq[4]] + g[seq[4]][seq[3]]) * 2;
        res = max(curr, res);
    } while (next_permutation(begin(seq), end(seq)));
    cout << res << endl;
	return 0;
}