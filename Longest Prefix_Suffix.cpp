class Solution {
  public:
    int getLPSLength(string &s) {
        // code here
        int n = s.length();
        vector<int> pref(n + 1, -1);
        for(int i = 1; i <= n; i++) {
            int k = pref[i - 1];
            while(k != -1 && s[i - 1] != s[k]) k = pref[k];
            pref[i] = k + 1;
        }
        return pref[n];
    }
};
