class Solution {
  public:
    int countStrings(string &s) {
        // code here
        if(s.length() == 0){
            return 0;
        }
        unordered_map<char,int> mp;
        bool isOriginal = false;
        for(auto &e : s){
            mp[e]++;
        }
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]--;
            if(mp[s[i]] != 0 && isOriginal == false){
                ans++;
                isOriginal = true;
            }
            ans += s.length() - 1 - i - mp[s[i]];
        }
        return ans;
    }
};
