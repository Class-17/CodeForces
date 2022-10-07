#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> mat(4);
    for (auto &x : mat) cin >> x;
    auto check = [&]() {
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j) {
                int cnt = 0;
                for (int x = 0; x <= 1; ++x)
                    for (int y = 0; y <= 1; ++y)
                        cnt += (mat[i + x][j + y] == '.');
                if (cnt != 2) return "YES";
            }
        return "NO";
    };
    cout << check() << endl;
    return 0;
}