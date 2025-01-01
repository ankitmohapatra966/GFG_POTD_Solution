class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        vector<vector<string>>res;
        unordered_map<string,vector<string>>mp;
        for(auto str:arr) {
             string temp=str;
             sort(str.begin(),str.end());
             mp[str].push_back(temp);
        }
        for(auto it:mp) {
              res.push_back(it.second);
        }
        sort(res.begin(),res.end());
        return res;
    }
};
