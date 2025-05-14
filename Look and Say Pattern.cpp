class Solution {
  public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string s = countAndSay(n-1);
        int count = 0;
        char ch = s[0];
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]!=ch){
                ans+=to_string(count);
                ans+=ch;
                count=1;
                ch = s[i];
            }
            else count++;
        }
        ans+=to_string(count);
        ans+=ch;
        return ans;
    }
};
