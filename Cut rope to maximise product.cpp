class Solution {
  public:
    int len;
    int solve(int i, int rem, vector<vector<int>>&dp){
        if(rem==i){
            if(rem==len) return 0;
            else return rem;
        }
        if(i>rem) return 0;
        if(dp[i][rem]!=-1) return dp[i][rem];

        return dp[i][rem]=max(i*solve(i, rem-i, dp), solve(i+1, rem, dp));
    }

    int maxProduct(int n) {
        // code here
        len=n;
        vector<vector<int>>dp(n+1, vector<int>(n+1, -1));
        return solve(1, n, dp);
    }
};
