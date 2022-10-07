#include <bits/stdc++.h>
using namespace std;

long long f(long long num) {
    long long x = 0;
    while (num > 0) {
        if (num % 10)
            x = x * 10 + num % 10;
        num /= 10;
    }
    return x;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    cout << (f(f(a)) + f(f(b)) == f(f(a + b)) ? "YES" : "NO") << '\n';
    return 0;
}