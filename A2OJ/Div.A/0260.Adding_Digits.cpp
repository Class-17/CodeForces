#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, n;
    cin >> a >> b >> n;
    auto check = [&]()->string {
        int d = 0;
        while (d < 10 && (a * 10 + d) % b) d++;
        if (d == 10) return "-1";
        string res = to_string(a * 10 + d);
        for (int i = 1; i < n; ++i)
            res.push_back('0');
        return res;
    };
    cout << check() << endl;
    return 0;
}