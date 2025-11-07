class Solution {
  public:
    static bool cmp(vector<int> &j1, vector<int> &j2){
        return j1[1]<j2[1];
    } 
    
    virtual void findLast(int l, int r, vector<vector<int>> &jobs, int x, int &last){
      if(l>r)
        return;
      
      int m = l + (r-l)/2;
      
      if(jobs[m][1] <= x){
          last = m;
          findLast(m+1, r, jobs, x, last);
          return;
      }
      else
        findLast(l, m-1, jobs, x, last);
        
      return;    
          
    }
    
    
    virtual int maxProfit(vector<vector<int>> &jobs) {
      
      sort(jobs.begin(), jobs.end(), cmp);
      int n = jobs.size();
      vector<int> dp(n, 0);
      
      dp[0] = jobs[0][2];
      
      for(int i=1;i<n;i++){
          int take = jobs[i][2];
          int last = -1;
          findLast(0, i-1, jobs, jobs[i][0], last);
          
          if(last != -1)
            take += dp[last];
          
          dp[i] = max(dp[i-1], take);
          
      }
      
      return dp[n-1];
    }
};
