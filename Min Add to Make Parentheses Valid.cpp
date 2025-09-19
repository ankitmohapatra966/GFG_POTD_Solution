class Solution {
  public:
    int minParentheses(string& s) {
        int open = 0, close = 0;
        
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                open++;
            }
            else if(s[i] == ')'){
                if(open == 0){
                    close++;
                }
                else{
                    open--;
                }
            }
        }
        
        return open+close;
    }
};
