class Solution {
  public:
  long long countWays(int n)
    {
        long long ans=1;
        while(n>=2)
        {
            n=n-2;
            ans+=1;
        }
        return ans;
        
    }
};
