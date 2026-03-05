class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int ans=-1;
        unordered_map<char,int>m;
        int j=0;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
            if(m.size()==k)ans=max(ans,i-j+1);
            while(m.size()>k && j<i){
                if(m[s[j]]==1)m.erase(s[j]);
                else m[s[j]]--;
                j++;
            }
        }
        return ans;
    }
};
