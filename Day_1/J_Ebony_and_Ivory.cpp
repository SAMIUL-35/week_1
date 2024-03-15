#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int a,b,c;
  cin>>a>>b>>c;
bool ok=false;
for (int i = 0; i <= c; i += a) {
        for (int j = 0; j <= c; j += b) {
            if (i + j == c) {
                ok = true;
                break;
            }
        }}
if(ok)cout<<"Yes";
else cout<<"No";

    return 0;
}