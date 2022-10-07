#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, sx, sy, ex, ey;
    cin >> n >> sx >> sy >> ex >> ey;
    string s; cin >> s;
    auto run = [&]() {
        for (int i = 0; i < n; ++i) {
            if (sx == ex && sy == ey) return i;
            switch (s[i]) {
            case 'E' : if (sx < ex) sx++; break;
            case 'S' : if (sy > ey) sy--; break;
            case 'W' : if (sx > ex) sx--; break;
            case 'N' : if (sy < ey) sy++; break;
            }
        }
        return (sx == ex && sy == ey ? n : -1);
    };
    cout << run() << endl;
	return 0;
}