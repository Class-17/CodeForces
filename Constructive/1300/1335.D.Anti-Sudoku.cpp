#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        string mat[9];
        for (int i = 0; i < 9; ++i)
            cin >> mat[i];
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j) {
                auto &ch = mat[i * 3 + j][i + j * 3];
                ch = ch > '1' ? ch - 1 : '2';
            }
        for (int i = 0; i < 9; ++i)
            cout << mat[i] << '\n';
    }
    return 0;
}