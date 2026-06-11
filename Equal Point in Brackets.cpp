class Solution {
  public:
    int findIndex(string &s) {
        int n=s.size();
        int close = 0;
        for(char &ch : s){
            if(ch == ')'){
                close++;
            }
        }
        int open = 0;
        for(int i = 0; i < n; i++){
            if(open == close)return i;
            if(s[i] == '(')open++;
            else close--;
        }
        return n;
    }
};
