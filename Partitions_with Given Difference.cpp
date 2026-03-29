class Solution {
  public:
    virtual int fun(int i, int tar, vector<int> &arr, vector<vector<int>> &dp){
      if(i<0){
        if(tar==0) return 1;
        return 0;
      }
      
      if(dp[i][tar] != -1) return dp[i][tar];
      
      int t=0, nt=0;
      if(arr[i]<=tar) t=fun(i-1, tar-arr[i], arr, dp);
      nt=fun(i-1, tar, arr, dp);
      
      return dp[i][tar]=t+nt;
    }
    
    virtual int countPartitions(vector<int>& arr, int diff){
      int n=arr.size();
      int sum=0;
      for(int x: arr) sum+=x;
      
      if(sum<diff || (sum-diff)%2) return 0;
      
      
      int tar=(sum-diff)/2;
      vector<vector<int>> dp(n+1, vector<int>(tar+1, -1));
      return fun(n-1, tar, arr, dp);
    }
};
