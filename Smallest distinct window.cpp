class Solution {
  public:
    int findSubString(string& str) {
        bitset<26> present = 0;
        
        for(auto i : str) {
            present[i - 'a'] = 1;
        }
        
        int dist = present.count();
        int ans = str.size();
        
        int freq[26] = {0};
        
        for(int i = 0, j = 0; i < str.size(); i++) {
            int curr = str[i] - 'a';
            if(freq[curr] == 0) dist--;
            freq[curr]++;
            
            while(freq[str[j] - 'a'] > 1) freq[str[j++] - 'a']--;
            
            if(dist == 0) ans = min(ans, (i - j + 1));
        }
        
        return ans;
    }
};
