#include <bits/stdc++.h>
using namespace std;

int comp(string& a, string& b) {
    for (auto& c : a) c = tolower(c);
    for (auto& c : b) c = tolower(c);
    if (a < b) return -1;
    if (a > b) return 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    cout << comp(a, b) << endl;
    return 0;
}