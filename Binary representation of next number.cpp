class Solution {
  public:
    string binaryNextNumber(string s) {
        int i=s.size()-1;
        while(i>=0&&s[i]!='0'){
            s[i]='0';
            i--;
        }
        if(i<0)s='1'+s;
        else s[i]='1';
        reverse(s.begin(),s.end());
        while(true){
            int n=s.size();
            if(s[n-1]=='0')s.pop_back();
            else break;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
