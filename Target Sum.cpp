class Solution {
  public:
  
    int solve(int i, vector<int>&arr, int t, map<pair<int, int>, int>&dp){
        if(i==0){
            if(abs(arr[i])==abs(t)) return 1;
            return 0;
        }
        if(dp.count({i, t})) return dp[{i, t}];
        return dp[{i, t}]=(solve(i-1, arr, t-arr[i], dp)+solve(i-1, arr, t+arr[i], dp));
    }
  
    int totalWays(vector<int>& arr, int target) {
        //  code here
        int n=arr.size();
        map<pair<int, int>, int>dp;
        return solve(arr.size()-1, arr, target, dp);
    }
};
