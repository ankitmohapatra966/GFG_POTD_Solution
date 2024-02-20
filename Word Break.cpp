class Solution {
public:
    int wordBreak(string A, vector<string>& B) {
        unordered_set<string> wordSet(B.begin(), B.end());
        int n = A.size();
        vector<bool> dp(n + 1, false); // dp[i] indicates if substring A[0...i-1] can be segmented into words from dictionary
        
        dp[0] = true; // Empty string can always be segmented
        
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (dp[j] && wordSet.find(A.substr(j, i - j)) != wordSet.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
        
        return dp[n] ? 1 : 0;
    }
};
