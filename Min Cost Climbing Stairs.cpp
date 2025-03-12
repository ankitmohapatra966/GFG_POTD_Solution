class Solution {
  public:
    int solve(int i, vector<int>&cost, int n, vector<int>&dp){
        if(i>=cost.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int climb1=cost[i]+solve(i+1, cost, n, dp);
        int climb2=cost[i]+solve(i+2, cost, n, dp);
        return dp[i]=min(climb1, climb2);
    }
  
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        int n=cost.size();
        vector<int>dp(n+1, -1);
        return min(solve(0, cost, n, dp), solve(1, cost, n, dp));
    }
};
