class Solution {
public:
    int longestCommonSubstr(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();
        vector<vector<int>> dp(2, vector<int>(m + 1, 0));
        int maxLength = 0;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (str1[i - 1] == str2[j - 1]) {
                    dp[i % 2][j] = dp[(i - 1) % 2][j - 1] + 1;
                    maxLength = max(maxLength, dp[i % 2][j]);
                } else {
                    dp[i % 2][j] = 0;
                }
            }
        }
        
        return maxLength;
    }
};
