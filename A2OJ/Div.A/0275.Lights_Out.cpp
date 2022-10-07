#include <bits/stdc++.h>
using namespace std;

const int Size = 3;

const vector<pair<int,int>> trans = {
    {0, 0}, {-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void transform(vector<vector<int>>& grid, int r, int c) {
    for(int i = 0; i < 5; i++)
        if (r + trans[i].first >= 0 && r + trans[i].first < Size &&
            c + trans[i].second >= 0 && c + trans[i].second < Size)
            grid[r + trans[i].first][c + trans[i].second] = 
                !grid[r + trans[i].first][c + trans[i].second];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> grid(3, vector<int>(3, 1));
    for (int r = 0; r < Size; r++)
        for (int c = 0; c < Size; c++) {
            int t; cin >> t;
            if (t % 2 == 1) transform(grid, r, c);
        }
    for (int r = 0; r < Size; r++) {
        for (int c = 0; c < Size; c++)
            cout << grid[r][c];
        cout << endl;
    }
    return 0;
}