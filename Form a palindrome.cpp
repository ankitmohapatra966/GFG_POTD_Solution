class Solution{
  public:
  
    int lps(string s1 , string s2 , int i , int j , vector<vector<int>> &dp){
        
        if(i >= s1.length() || j >= s2.length()){
            return 0;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        if(s1[i] == s2[j]){
            return dp[i][j] = 1 + lps(s1,s2,i+1,j+1,dp);
        }
        
        int a1 = lps(s1,s2,i+1,j,dp);
        int a2 = lps(s1,s2,i,j+1,dp);
        return dp[i][j] = max(a1,a2);
        
    }
  
    int countMin(string str){
    
        int n = str.length();
        string s1 = str;
        reverse(str.begin(),str.end());
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return n - lps(s1,str,0,0,dp);
    }
};
