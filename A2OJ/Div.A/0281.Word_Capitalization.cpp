#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char c; c = getchar();
    cout << char(toupper(c));
    do {
        cout <<  (c = getchar());
    } while (c != '\n');
    cout << endl;
    return 0;
}