class Solution
{
    public:
    int mod=1e9+7;
    int padovanSequence(int n)
    {
       vector<int> p(n+1,1);
       for(int i=3;i<=n;i++){
           p[i]=(p[i-2]+p[i-3])%mod;
       }
       return p[n];
    }
    
};
