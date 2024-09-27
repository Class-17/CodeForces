#include <bits/stdc++.h>

using i64 = long long;

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) {
        std::string s; std::cin >> s;
        i64 res = 0, one = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '0')
                res += (one > 0 ? one + 1 : 0);
            else
                one += 1;
        }
        std::cout << res << '\n';
    }   
    return 0;
}