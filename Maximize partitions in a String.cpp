class Solution {
  public:
    int maxPartitions(string &s) {
        vector<int> v(26,0);
        for(char c:s){
            v[c-'a']++;
        }
        unordered_map<int,int>mp;
        int ans = 0;
        for(int i = 0 ; i<s.size(); i++){
            char c = s[i];
            mp[c-'a']++;
            bool e = true;
            for(auto d:mp){
                if(v[d.first] != d.second){
                    e = false;
                }
            }
            if(e == true){
               ans++;
               mp = {};
            }
        }
        return ans;
        
    }
};
