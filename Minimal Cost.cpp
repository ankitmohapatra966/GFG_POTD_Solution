class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n, INT_MAX);
        dp[n-1] = 0;
        for(int i = n-1; i >= 0; i--){
            for(int j = 1; j <= k; j++){
                if(i + j >= n) break;
                dp[i] = min(dp[i], abs(arr[j+i] - arr[i]) + dp[i+j]);
            }
        }
        return dp[0];
    }
};
