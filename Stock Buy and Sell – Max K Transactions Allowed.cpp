class Solution {
  public:
    int find(int day, int n,vector<int>& prices,int buy,int k, vector<vector<vector<int>>> &dp){
        if (k==0)
        return 0;
        if (day>=n)
        return 0;
        
        if (dp[day][buy][k]!=-1)
        return dp[day][buy][k];
        
        if (buy){
            return dp[day][buy][k]=max(-prices[day]+find(day+1,n,prices,0,k,dp),find(day+1,n,prices,1,k,dp));
        }
        else
        return dp[day][buy][k]=max(prices[day]+find(day+1,n,prices,1,k-1,dp),find(day+1,n,prices,0,k,dp));
    }
    int maxProfit(vector<int>& prices, int k) {
        // code here
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(3,vector<int>(k+1,-1)));
        
        return find(0,n,prices,1,k,dp);
    }
};
