class Solution {
  public:
    void solve(string s, set<string> &ans, int index){
      
      if(index==s.length()){
          ans.insert(s);
          return;
      }
      
      for(int j=index;j<s.length();j++){
          swap(s[index],s[j]);
          solve(s,ans,index+1);
          
          swap(s[index],s[j]);
      }
  }
    vector<string> findPermutation(string &s) {
        vector<string> ans;
        set<string> a;
        int index=0;
        solve(s,a,index);
        for(auto it:a){
            ans.push_back(it);
        }
        return ans;
    }
};
