#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

bool isNextPrime(int n, int m) {
    for(int i = n + 1; i < m; i++)
        if(isPrime(i)) return false;
    return isPrime(m);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    cout << (isNextPrime(n, m) ? "YES" : "NO") << endl;
    return 0;
}