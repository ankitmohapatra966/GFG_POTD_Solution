class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        // code here
        string temp=s1;
        int cnt=1;
        while(temp.size()<s2.size()){
            temp+=s1;
            cnt++;
        }
        if(temp.find(s2)!=string::npos) return cnt;
        temp+=s1;
        if(temp.find(s2)!=string::npos) return cnt+1;
        return -1;
    }
};
