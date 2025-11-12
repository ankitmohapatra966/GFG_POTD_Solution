class Solution {
  public:
    virtual int fun(int i, int j, int &n1, int &n2, string &txt, string &pat, vector<vector<int>> &dp){
    
      if(i==n1){
        while(j<n2){
          if(pat[j]=='*')
            j++;
          else
            break;
        }  
        if(j==n2)
          return 1;
        return 0;  
      }
      else if((i>=n1) || (j>=n2))
        return 0;
      
      if(dp[i][j] != -1)
        return dp[i][j];
      
      
      if((pat[j]=='?') || (pat[j] == txt[i]))
        return dp[i][j] = fun(i+1, j+1, n1, n2, txt, pat, dp);
      if(pat[j]=='*')
        return dp[i][j] = fun(i+1, j, n1, n2, txt, pat, dp) || fun(i, j+1, n1, n2, txt, pat, dp) || fun(i+1, j+1, n1, n2, txt, pat, dp);
       
      return 0;    
    }
  
    virtual bool wildCard(string &txt, string &pat){
      int n1=txt.size(), n2=pat.size();    
      vector<vector<int>> dp(n1+1, vector<int>(n2+1, -1));
      
      int t = fun(0, 0, n1, n2, txt, pat, dp);
      
      return (t==1);
    }
};
