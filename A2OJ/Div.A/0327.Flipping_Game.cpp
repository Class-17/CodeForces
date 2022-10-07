#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int flip = -1, curr = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        curr += -x * 2 + 1;
        flip = max(curr, flip);
        if (curr < 0) curr = 0;
        cnt += x;
    }
    cout << cnt + flip << endl;
    return 0;
}