#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll x, y;
    cin >> x >> y;
    int cnt = 0;
    int k=1;
    for (ll i = x; i <= y; i *=2 ) {
        cnt++;
        
        k++;
    }
    cout << cnt;
    return 0;
}
