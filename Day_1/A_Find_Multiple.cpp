#include <bits/stdc++.h>

using namespace std;

int main ()

{
  long long a,b,c;
  cin>>a>>b>>c;
  bool ok=false;;
for (int i = 0; i <1000 ; i++)
{
    if((c*i)>=a and(c*i)<=b )
    {
        cout<<(c*i)<<" ";
ok=true;
        break;
    }
}
if(!ok) cout<<"-1";

    return 0;
}