// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &a , int n){
        int l=0,r=0;
        long long sum=0,ans=0;
        
        while(r<n)
        {
            sum+=a[r];
            if((r-l+1)==k)
            {
              ans=max(sum,ans);
              sum-=a[l];
              l++;
              r++;
            }
            else r++;
        }
         return ans;
    }
   
};