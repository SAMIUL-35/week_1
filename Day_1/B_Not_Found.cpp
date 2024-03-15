#include <bits/stdc++.h>

using namespace std;

int main ()

{
  string s;
  cin>>s;
  vector<int> f(26,0);
  for (int i = 0; i < s.size(); i++)
  {
    int a=s[i]-'a';
f[a]++;
  }
  bool ok=false;
for (int i = 0; i < 26; i++)
{
     if(f[i]==0)
    {
        cout<<char(i+'a');
        ok=true;
        break;
    }
}

if(!ok) cout<<"None";

    return 0;
}