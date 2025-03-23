class Solution {
public:
    int dp[1005];

    int fn(string &s, int i) {
        if (i == s.size()) return 1;
        if (s[i] == '0') return 0;
        if (dp[i] != -1) return dp[i];

        int ans = fn(s, i + 1);

        if (i + 1 < s.size() && (s[i] == '1' || (s[i] == '2' && s[i + 1] <= '6'))) {
            ans += fn(s, i + 2);
        }

        return dp[i] = ans;
    }

    int countWays(string &digits) {
        memset(dp, -1, sizeof(dp));
        return fn(digits, 0);
    }
};
