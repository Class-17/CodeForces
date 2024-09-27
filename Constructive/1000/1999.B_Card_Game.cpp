#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) {
        int a[2], b[2];
        std::cin >> a[0] >> a[1] >> b[0] >> b[1];
        int res = 0;
        for (int i = 0; i < 2; ++i)
            for (int j = 0; j < 2; ++j) {
                int sa = (a[i] > b[j]) + (a[i ^ 1] > b[j ^ 1]);
                int sb = (a[i] < b[j]) + (a[i ^ 1] < b[j ^ 1]);
                res += sa > sb;
            }
        std::cout << res << '\n';
    }
    return 0;
}