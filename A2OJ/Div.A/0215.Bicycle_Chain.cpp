#include <bits/stdc++.h>
using namespace std;

int cntGears(vector<int>& pedal, vector<int>& wheel) {
    int cnt = 0, ratio = 0;
    for (int i = wheel.size() - 1; i >= 0; i--) {
        for (auto & stars : pedal)
            if (stars != 0 && (wheel[i] % stars == 0)) {
                if (wheel[i] / stars < ratio) continue;
                if (wheel[i] / stars > ratio) {
                    ratio = wheel[i] / stars;
                    cnt = 1;
                }
                else                   cnt++;
                stars = 0;
                break;
            }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> pedal(n);
    for (auto & star : pedal) cin >> star;
    int m; cin >> m;
    vector<int> wheel(m);
    for (auto & star : wheel) cin >> star;
    cout << cntGears(pedal, wheel) << endl;
    return 0;
}