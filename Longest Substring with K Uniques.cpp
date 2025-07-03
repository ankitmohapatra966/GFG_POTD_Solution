class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        vector <int> freq(26, 0);
        int cnt = 0;
        int n = s.length();
        int i = 0, j = 0;
        int ans = -1;
        
        while(j < n){
            if(freq[s[j] - 'a'] == 0) cnt++;
            freq[s[j] - 'a']++;
            
            if(cnt == k) ans = max(ans, j-i+1);
            
            while(i < j && cnt > k){
                freq[s[i] - 'a']--;
                if(freq[s[i] - 'a'] == 0) cnt--;
                i++;
            }
            j++;
        }
        
        return ans;
    }
};
