#include <bits/stdc++.h>
using namespace std;

int Euclid_s_formula(int n) {
    int sum = 0;
    for (int i = 2; i * i <= n; ++i)
        for (int j = 1; j < i && i * i + j * j <= n; ++j)
            if ((i % 2) ^ (j % 2) && __gcd(i, j) == 1)
                sum += n / (i * i + j * j);
    return sum;
}

int simple_math(int n) {
    int sum = 0;
    for (int a = 1; a <= n; ++a) {
        int max_b = sqrt(n * n - a * a);
        for (int b = a; b <= max_b; ++b) {
            double c = sqrt(a * a + b * b);
            sum += (int(c) == c);
        }
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    cout << Euclid_s_formula(n) << endl;
    return 0;
}