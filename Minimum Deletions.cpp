class Solution {
  public:
    int check(string &s,int i,int j,vector<vector<int>>&dp){
        int n = s.size();
        if(j==i || i>j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        int val = INT_MAX;
        if(s[i]==s[j]) val = min(val,check(s,i+1,j-1,dp));
        else{
            val = min({val,1+check(s,i+1,j,dp),1+check(s,i,j-1,dp)});
        }
        
        return dp[i][j] = val;
    }
    
    int minDeletions(string s) {
        int n = s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return check(s,0,n-1,dp);
    }
};
