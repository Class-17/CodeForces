#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int n; cin >> n;
    int a = 0, b = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        if (x == 100) a++;
        else          b++;
    }
    auto check = [&]() {
        for (int i = 0; i <= a; ++i)
            for (int j = 0; j <= b; ++j)
                if (i + j * 2 == a - i + (b - j) * 2) 
                    return "YES";
        return "NO";
    };
    cout << check() << endl;
	return 0;
}