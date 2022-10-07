#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 1000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bitset<maxn + 1> lucky;
    auto check = [](int num) {
        while (num > 0) {
            if (num % 10 != 4 && num % 10 != 7) return false;
            num /= 10;
        }
        return true;
    };
    for (int i = 1; i <= maxn; ++i) {
        if (!lucky[i]) lucky[i] = check(i);
        if (!lucky[i]) continue;
        for (int j = i + i; j <= maxn; j += i)
            lucky[j] = true;
    }
    int n; cin >> n;
    cout << (lucky[n] ? "YES" : "NO") << '\n';
    return 0;
}