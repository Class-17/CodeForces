#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);
    int _; std::cin >> _;
    while (_--) {
        int n;
        std::string s;
        std::cin >> n >> s;
        std::vector<int> ord(26), cnt(26);
        std::iota(ord.begin(), ord.end(), 0);
        for (auto &c : s) ++cnt[c - 'a'];
        std::ranges::sort(ord, std::greater<>(), [&](int x) {return cnt[x];});
        std::cout << std::string(cnt[ord[0]] - cnt[ord[1]], ord[0] + 'a');
        cnt[ord[0]] -= cnt[ord[0]] - cnt[ord[1]];
        std::queue<int> q;
        for (int i = 0; i < 26; ++i)
            if (cnt[ord[i]]) q.push(ord[i]);
        while (!q.empty()) {
            auto i = q.front(); q.pop();
            std::cout << char(i + 'a');
            if (--cnt[i]) q.push(i);
        }
        std::cout << '\n';
    }
    return 0;
}