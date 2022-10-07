#include <bits/stdc++.h>
using namespace std;

constexpr int max_size = 10;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r, c;
    cin >> r >> c;
    bitset<max_size> row, col;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            char ch; cin >> ch;
            if (ch == 'S') 
                row[i] = col[j] = true;
        }
        cin.get();
    }
    int rr = 0, cc = 0;
    for (int i = 0; i < r; ++i)
        rr += row[i];
    for (int i = 0; i < c; ++i)
        cc += col[i];
    cout << r * c - rr * cc << endl;
    return 0;
}