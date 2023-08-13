#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    while (_--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (auto &x : arr) cin >> x;
        vector<int> odd, even;
        for (int i = 0; i < n; ++i)
            if (arr[i] & 1)
                odd.push_back(i + 1);
            else
                even.push_back(i + 1);
        int la = size(odd), lb = size(even);
        int tot = 0;
        if (arr[0] & 1) {
            cout << la - 1 + lb << '\n';
            for (int i = 0; i < la - 1; ++i)
                cout << odd[i] << ' ' << odd[la-1] << '\n';    
            for (int i = 0; i < lb; ++i)
                cout << 1 << ' ' << even[i] << '\n';
        }
        else {
            cout << lb - 1 + la << '\n';
            for (int i = 0; i < lb - 1; ++i)
                cout << even[i] << ' ' << even[lb-1] << '\n';
            for (int i = 0; i < la; ++i)
                cout << 1 << ' ' << odd[i] << '\n';
        }
    }
    return 0;
}