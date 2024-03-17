//https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

int update(long long int A[],long long int l, long long int r)
{
 long long cur=0;
 for(int i=l;i<r;i++)
 {
     if(A[i]<0)
     {
         cur=A[i];
         break;
     }
 }
 return cur;
}
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
               int l=0,r=0;
        
        vector<long long > a;
        long long c=0;
      
        while(r<N)
        { 
           if(A[r]<0 && c==0)c=A[r];
           
         
            if((r-l+1)==K)
            {
                
              a.push_back(c);
                l++;
                r++;
                if(A[l-1]==c) c=update(A,l,r);
                
            }
           else  r++;
        }
         return a;                                  
 }