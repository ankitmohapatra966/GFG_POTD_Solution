class Solution {
  public:
    vector<int> search(string& pat, string& txt) {
       vector<int>ans;
       int k=pat.length();
       for(int i=0;i<txt.length()-k+1;i++){
          if(pat[0]!=txt[i])
          continue;
           string str=txt.substr(i,k);
           if(str==pat)
           ans.push_back(i);
       }
       return ans;
    }
};
