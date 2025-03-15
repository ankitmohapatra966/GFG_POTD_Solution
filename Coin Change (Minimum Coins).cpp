class Solution {
  public:
    int minCoins(vector<int> &coins, int sum) {
        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(j == 0){
                    dp[i][j] = 0;
                }
                else if(i == 0){
                    dp[i][j] = 1e6;
                }
                else if(j >= coins[i-1]){
                    int take = 1 + dp[i][j-coins[i-1]];
                    int nottake = dp[i-1][j];
                    dp[i][j] = min(take,nottake);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return (dp[n][sum] == 1e6)?-1:dp[n][sum];
    }
};
