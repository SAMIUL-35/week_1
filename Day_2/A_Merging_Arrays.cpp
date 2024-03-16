#include <bits/stdc++.h>
using namespace std;

int main() {
  

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for (int i = 0;i < m;i++) {
        cin >> b[i];
    }
vector<int> c;
    int l = 0, r = 0;

    while (r < m || l < n) {
        if (b[r] > a[l]  ) {
            c.push_back(a[l]);
            l++;
              }
       
       else {
          c.push_back(b[r]);
          r++;
       }
       
    }
    for (int i = 0; i <c.size(); i++)
    {
        cout<<c[i]<<" ";
    }
    
    return 0;
}