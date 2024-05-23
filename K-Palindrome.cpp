class Solution{
public:
    int kPalindrome(string str, int n, int k)
    {
        vector<vector<int>> dp(n, vector<int>(n, 0));
    
        for (int gap = 1; gap < n; ++gap) {
            for (int i = 0, j = gap; j < n; ++i, ++j) {
                if (str[i] == str[j]) {
                    dp[i][j] = dp[i + 1][j - 1];
                } else {
                    dp[i][j] = 1 + min(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }
        int v = dp[0][n-1];
        return v <= k;
    }
};
