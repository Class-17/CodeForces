#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string num; cin >> num;
    int step = 0;
    while (size(num) > 1) {
        num = to_string(accumulate(begin(num), end(num), 0, [](const auto &a, const auto& b) {
            return move(a) + b - '0';}));
        step++;
    }
    cout << step << '\n';
    return 0;
}