#include <bits/stdc++.h>
using namespace std;

int nextBeautyYear(int year) {
    while (true) {
        vector<int> cnt(10, 0);
        for (auto& digit : to_string(year))
            cnt[digit - '0']++;
        if (all_of(cnt.begin(), cnt.end(), [](int i){return i < 2;}))
            return year;
        year++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int year;
    cin >> year;
    cout << nextBeautyYear(year + 1) << endl;
    return 0;
}