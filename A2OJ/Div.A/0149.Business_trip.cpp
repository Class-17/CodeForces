#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k; cin >> k;
    vector<int> seq(12);
    for (auto & x : seq) cin >> x;
    sort(rbegin(seq), rend(seq));
    int num = 0;
    while (k > 0 && num < 12) 
        k -= seq[num++];
    cout << (k > 0 ? -1 : num) << endl;
    return 0;
}