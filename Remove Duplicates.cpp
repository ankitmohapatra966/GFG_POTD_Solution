class Solution {
  public:

    string removeDups(string str) {
        
        
        vector<int>v(26,0);
        
        for(int i=0; i<str.size();i++){
            v[str[i]-'a']+=1;
        }
        
        string ans="";
        for(int i=0; i<str.size();i++){
            if(v[str[i]-'a']>0){
                ans+=str[i];
                v[str[i]-'a']=0;
            }
        }
        return ans;
    }
};
