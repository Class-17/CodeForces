#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    vector<pair<int, int>> arr(n);
    for (auto &[x, y] : arr)
        cin >> x >> y;
    vector<int> st(n);
    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (st[i]) continue;
        queue<int> q;
        q.push(i);
        st[i] = 1;
        while (!q.empty()) {
            auto &[r, c] = arr[q.front()]; q.pop();
            for (int j = 0; j < n; ++j) {
                auto &[nr, nc] = arr[j];
                if (!st[j] and (nr == r or nc == c)) {
                    q.push(j);
                    st[j] = 1;
                }   
            }
        }
        ++res;
    }
    cout << res - 1 << '\n';
	return 0;
}