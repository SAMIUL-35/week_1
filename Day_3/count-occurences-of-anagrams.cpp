//  https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..

class Solution {
public:
    int search(string p, string t) {
        int l = 0, r = 0, ans = 0;
        int k = p.length();
        int n = t.length();
        vector<int> a(26,0);
        vector<int> b(26,0);
       
       
        for (char c : p) {
            a[c-'a']++;
        }
        
        while (r < n) {
            b[t[r]-'a']++;
            
            if (r - l + 1 == k) {
                if (a == b) {
                ans++;
            }
                b[t[l]-'a']--;
                l++;
            }
            r++;
        }
        return ans;
    }
};