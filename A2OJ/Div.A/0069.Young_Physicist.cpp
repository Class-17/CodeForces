#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> vi(3);
    while (n--) {
        for (int i = 0; i < 3; i++) {
            int t; cin >> t;
            vi[i] += t;
        }
    }
    cout << (all_of(vi.begin(), vi.end(), [](int i) {return i == 0;}) ? 
             "YES" : "NO") << endl;
    return 0;
}