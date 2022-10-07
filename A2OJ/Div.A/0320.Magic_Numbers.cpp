#include <bits/stdc++.h>
using namespace std;

bool isMagical(vector<string>& nums, string& n) {
    for (int i = 0; i < n.size(); i++) {
        int p = 3;
        while (p) {
            if (n.substr(i, p) == nums[p - 1]) {
                i += p - 1;
                break;;
            }
            p--;
        }
        if (p == 0) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n; cin >> n;
    vector<string> nums = {"1", "14", "144"};
    cout << (isMagical(nums, n) ? "YES" : "NO") << endl;
    return 0;
}