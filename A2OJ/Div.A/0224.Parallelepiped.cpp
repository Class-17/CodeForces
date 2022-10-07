#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ac, ab, bc;
    cin >> ac >> ab >> bc;
    int a = pow(ac * ab / bc, 0.5);
    cout << (a + ab / a + ac / a) * 4 << endl;
    return 0;
}