#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string song; cin >> song;
    vector<string> words;
    auto check = [&](int pos) {
        while (pos < size(song) && song.substr(pos, 3) != "WUB") pos++;
        return pos;
    };
    for (int i = 0; i < size(song); ++i) {
        if (song.substr(i, 3) == "WUB")
            i += 2;
        else {
            auto pos = check(i);
            words.push_back(song.substr(i, pos - i));
            i = pos - 1;
        } 
    }
    for (int i = 0; i < size(words); ++i)
        cout << words[i] << (i + 1 < size(words) ? ' ' : '\n');
    return 0;
}