class Solution {
  public:
  
    void computeLPSArray(vector<int>& pat, vector<int>& lps) {
        
        int m = pat.size();

        for (int i = 1; i < m; i++) {
            
            int j = lps[i - 1];

            while (j > 0 && pat[i] != pat[j]) {
                j = lps[j - 1];
            }

            if (pat[i] == pat[j]) {
                j++;
            }

            lps[i] = j;
        }
    }

    vector<int> search(vector<int> &a, vector<int> &b) {
        
        int n = a.size();
        int m = b.size();

        vector<int> lps(m, 0);
        computeLPSArray(b, lps);

        vector<int> ans;

        int j = 0;

        for (int i = 0; i < n; i++) {

            while (j > 0 && a[i] != b[j]) {
                j = lps[j - 1];
            }

            if (a[i] == b[j]) {
                j++;
            }

            if (j == m) {
                ans.push_back(i - m + 1);
                j = lps[j - 1];
            }
        }

        return ans;
    }
};
