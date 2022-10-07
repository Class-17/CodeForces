#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int digits[6] = {0};
    while (n--) {
        int digit; cin >> digit;
        digits[digit]++;
    }
    string ans;
    if (digits[5] / 9 > 0 && digits[0] > 0)
        ans.append(digits[5] / 9 * 9, '5').append(digits[0], '0');
    else if (digits[0] > 0) ans = "0";
    else                    ans = "-1";
    cout << ans << endl;
    return 0;
}