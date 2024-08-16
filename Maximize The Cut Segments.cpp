class Solution
{
    public:
    
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        
        vector<int> dp(n + 1, INT_MIN);
        
        dp[0] = 0;
        for(int i = 1; i <= n; ++i){
            if(i - x >= 0){
                
                dp[i] = max(dp[i - x] == INT_MIN ? INT_MIN : dp[i - x] + 1, dp[i]);
            }
            if(i - y >= 0){
                dp[i] = max(dp[i - y] == INT_MIN ? INT_MIN : dp[i - y] + 1, dp[i]);
            }
            if(i - z >= 0){
                dp[i] = max(dp[i - z] == INT_MIN ? INT_MIN : dp[i - z] + 1, dp[i]);
            }
        }
        return dp[n] == INT_MIN ? 0 : dp[n];
    }
};
