#include <bits/stdc++.h>
using namespace std;

constexpr int MAXN = 1e7;

bitset<MAXN + 1> st;

auto sieve = []() {
    for (int i = 2; i <= MAXN; ++i) {
        if (st[i]) continue;
        for (int j = i << 1; j <= MAXN; j += i)
            st[j] = 1;
    }
    return nullptr;
} ();


int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    // cout << "Check git push right now" << endl;
    return 0;
}