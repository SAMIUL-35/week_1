// https://codeforces.com/problemset/problem/621/A

#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int n;
  cin>>n;
  vector<int> v(n);
 int even=0;
 int min_even=INT_MAX;
 long long sum=0;
  for (int i = 0; i < n; i++)
  {
    cin>>v[i];
    sum+=v[i];
    if(v[i]%2==1) 
    {
      even++;
      if(min_even>v[i]) min_even=v[i];
    }
    
  }
 if(even%2==1) cout<<sum-min_even<<endl;
 else cout<<sum<<endl;
  


    return 0;
}