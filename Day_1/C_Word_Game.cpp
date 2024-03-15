#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<string, int> mp;
        string word[3][n];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                cin >> word[i][j];
                mp[word[i][j]]++;
            }
        }
        for (int i = 0; i < 3; i++) {
            int point = 0;
            for (int j = 0; j < n; j++) {
                
                if (mp[word[i][j]] == 1) {
                    point += 3;
                } else if (mp[word[i][j]] == 2) {
                    point++;
                }
            }
            cout << point << ' ';
        }
        cout << endl;
    }
    return 0;
}
