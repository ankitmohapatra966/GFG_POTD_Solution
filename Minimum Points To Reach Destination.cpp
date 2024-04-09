class Solution{
public:
    int minPoints(int m, int n, vector<vector<int>>& points) {
        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[m - 1][n - 1] = points[m - 1][n - 1] > 0 ? 1 : abs(points[m - 1][n - 1]) + 1;
        
        for (int i = m - 2; i >= 0; --i) {
            dp[i][n - 1] = max(1, dp[i + 1][n - 1] - points[i][n - 1]);
        }
        
        for (int j = n - 2; j >= 0; --j) {
            dp[m - 1][j] = max(1, dp[m - 1][j + 1] - points[m - 1][j]);
        }
        
        for (int i = m - 2; i >= 0; --i) {
            for (int j = n - 2; j >= 0; --j) {
                int min_points_on_exit = min(dp[i + 1][j], dp[i][j + 1]);
                dp[i][j] = max(1, min_points_on_exit - points[i][j]);
            }
        }
        
        return dp[0][0];
    }
};
