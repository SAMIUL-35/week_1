#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        string s1;
        s1 += s;
        s += s1;
        int cnt = 0;
        
        int ans = 0;
      for (int i = 0; i < s.size(); i++)
      {
       if(s[i]==c)
       {
        cnt=0;
        while (s[i]!='g'&& i<s.size() )
        {
            cnt++;
            i++;
        }
        ans=max(ans,cnt);
       }
      }
      cout<<ans<<endl;
        
    }
    return 0;
}
