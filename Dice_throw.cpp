class Solution {
  public:
    int helper(int faces, int dices, int sum, vector<vector<int>>&dp){
        if(!sum)return !dices;
        if(sum < 0 || !dices)return 0;
        if(dp[dices][sum]!=-1)return dp[dices][sum];
        int cnt = 0;
        for(int i = 1;i<=faces;i++){
            cnt += helper(faces, dices-1, sum - i, dp);
        }
        return dp[dices][sum] = cnt;
    }
    int noOfWays(int m, int n, int x) {
        // code here
        vector<vector<int>>dp(n+1, vector<int>(x+1, -1));
        return helper(m, n, x, dp);
    }
};
