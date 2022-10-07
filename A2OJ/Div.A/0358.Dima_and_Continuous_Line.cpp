#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    vector<pair<int, int>> itvs;
    for (int i = 0; i + 1 < n; ++i) {
        int a = arr[i], b = arr[i + 1];
        if (a > b) swap(a, b);
        itvs.push_back({a, b});
    }
    sort(begin(itvs), end(itvs));
    auto check = [&]() {
        int len = size(itvs);
        for (int i = 0; i < len; ++i)
            for (int j = i + 1; j < len && itvs[j].first < itvs[i].second; ++j)
                if (itvs[j].first > itvs[i].first && 
                    itvs[j].second > itvs[i].second) return true;
        return false;
    };
    cout << (check() ? "yes" : "no") << '\n';    
    return 0;
}