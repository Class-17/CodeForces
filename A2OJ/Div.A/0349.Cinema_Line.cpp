#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> seq(n);
    for (auto &x : seq) cin >> x;
    auto check = [&]() {
        int bill[3] = {0};
        for (auto &x : seq) {
            if (x == 50)
                if (--bill[0] < 0) return false;
            if (x == 100)
                if (bill[1] && bill[0])
                    bill[1]--, bill[0]--;
                else if (bill[0] >= 3)
                    bill[0] -= 3;
                else return false;
            bill[x / 25 - 1]++;
        }
        return true;
    };
    cout << (check() ? "YES" : "NO") << endl;
    return 0;
}