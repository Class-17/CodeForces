#include <bits/stdc++.h>
using namespace std;

int getStep() {
    int ans = 0;
    for (int r = 1; r <= 5; r++)
        for (int c = 1; c <= 5; c++) {
            int t; cin >> t;
            if (t == 1) 
                ans = abs(r - 3) + abs(c - 3);
        }
    return ans;
}

int main()
{
    cout << getStep() << endl;
    return 0;
}