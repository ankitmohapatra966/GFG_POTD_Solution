class Solution {
  public:
   int solve(int ind, int n, string &s, int prev, vector<vector<int>>&dp){
        
        if(ind==n) return 1;
        
        int sum=0;
        int ans=0;
        
        if(dp[ind][prev]!=-1) return dp[ind][prev];
        
        for(int i=ind; i<n; i++){
            sum+=(s[i]-'0');
            if(sum>=prev){
                ans+=solve(i+1, n, s, sum, dp);
            }
        }
        
        return dp[ind][prev]=ans;
    }
  
    int validGroups(string &s) {
        // code here
        int n=s.length();
        int prev=0;
        int ans=0;
        
        int sum=0;
        for(int i=0; i<n; i++) sum+=(s[i]-'0');
        
        vector<vector<int>>dp(n, vector<int>(sum+1, -1));
        
        for(int i=0; i<n; i++){
            prev+=(s[i]-'0');
            ans+=solve(i+1, n, s, prev, dp);
        }
        
        return ans;
    }
};
