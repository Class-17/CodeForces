#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') continue;
            int j = i + 1;
            while (j < n && s[j] == '0') j++;
            int cnt = j - i - k;
            if (j == n) cnt += k;
            if (i == 0) cnt += k;
            if (cnt > 0)
                sum += cnt / (k + 1);
            i = j - 1;
        }
        cout << sum << '\n';
    }
    return 0;
}