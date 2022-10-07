#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 3000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, v;
    cin >> n >> v;
    int w[maxn + 2] = {0};
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        w[a] += b;
    }
    int sum = 0;
    for (int i = 1; i <= maxn + 1; ++i) {
        int add = min(w[i - 1] + w[i], v);
        w[i] -= max(add - w[i - 1], 0);
        sum += add;
    }
    cout << sum << '\n';
    return 0;
}