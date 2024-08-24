class Solution {
public:
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        int N = wt.size();
        vector<vector<int>> dp(N+1, vector<int>(W+1, 0));
        for (int i = 1; i <= N; i++) {
            for (int w = 1; w <= W; w++) {
                if (wt[i-1] <= w) {
                    dp[i][w] = max(dp[i-1][w], val[i-1] + dp[i-1][w-wt[i-1]]);
                } else {
                    dp[i][w] = dp[i-1][w];
                }
            }
        }

        return dp[N][W];
    }
};
