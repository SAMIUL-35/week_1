#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    int cnt = 0;
    string s=" ";
    
    while (n != 0) {
        int d = n % 10;
        s += char('0' +d); 
        n = n / 10;
        cnt++;
    }
  
    int k = 4 - cnt;
  
    for (int i = 0; i < k; i++) {
        s =  s + '0'; 
    }
    
    for (int i = s.length() - 1; i >= 0; i--) {
        cout << s[i]; 
    }

    return 0;
}
