class Solution {
  public:
    int solve(vector<int>&arr,int lo,int hi,vector<vector<int>>&dp){
        if(lo+1 >= hi){
            return 0;
        }
        if(dp[lo][hi]!=-1){
            return dp[lo][hi];
        }
        int ans = INT_MAX;
        for(int i=lo+1;i<hi;i++){
            int temp = arr[lo] * arr[i] * arr[hi];
            temp += solve(arr,lo,i,dp);
            temp += solve(arr,i,hi,dp);
            ans = min(ans,temp);
        }
        return dp[lo][hi]=ans;
    }
    int matrixMultiplication(vector<int> &arr) {
        int n = arr.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(arr,0,n-1,dp);
    }
};
