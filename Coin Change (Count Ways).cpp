class Solution {
  public:
    int count(vector<int>& coins, int sum) {
        // code here.
        int n=coins.size();
        vector<int> dp(sum+1, 0);
        dp[0]=1;
        
        for(int i=0;i<n;i++){
            int x=coins[i];
            
            for(int j=x;j<=sum;j++){
                dp[j]+=dp[j-x];
            }
        }
        return dp[sum];
    }
};
