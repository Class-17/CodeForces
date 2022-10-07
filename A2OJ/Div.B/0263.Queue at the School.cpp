#include <bits/stdc++.h>
using namespace std;

void transform(string& seq) {
    for (int i = 0;i < seq.size(); i++) {
        if (seq[i] == 'G') continue;
        if (i + 1 < seq.size() && seq[i + 1] == 'G') {
            swap(seq[i], seq[i + 1]);
            i++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    string seq;
    cin >> seq;
    for (int i = 0; i < t; i++)
        transform(seq);
    cout << seq << endl;
    return 0;
}