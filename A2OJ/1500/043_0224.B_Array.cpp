#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    int minv = n + 1, l = -1, r = -1;
    map<int, int> mp;
    int num = 0;
    for (int i = 0, j = 0; i < n; ++i) {
        while (j < n and num < k) {
            if (++mp[arr[j]] == 1)
                ++num;
            ++j;
        }
        if (num == k and j - i < minv) {
            minv = j - i;
            l = i + 1;
            r = j;
        }
        if (--mp[arr[i]] == 0)
            --num;
    }
    cout << l << ' ' << r << '\n';
	return 0;
}