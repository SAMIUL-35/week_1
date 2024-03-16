//https://codeforces.com/problemset/problem/1604/A

// #include <bits/stdc++.h>
// using namespace std;

// int main () {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
       
//         int ans = 0;
//         for (int i = 1; i <= n; i++) {
//             int v;
//             cin >> v; 
//             ans=max(ans,v-i);
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n+1);
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            cin >> v[i]; 
            ans=max(ans,v[i]-i);
        }
        cout<<ans<<endl;
    }
    return 0;
}