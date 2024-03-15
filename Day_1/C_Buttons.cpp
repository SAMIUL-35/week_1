#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int a,b;
  cin>>a>>b;
  int maximum;
  if(a==b)
  {
maximum=a+b;
  }
  else 
  {
     maximum=max(a+(a-1),b+(b-1));
  }
cout<<maximum<<endl;

    return 0;
}