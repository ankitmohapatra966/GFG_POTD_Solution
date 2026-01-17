class Solution {
  public:
    bool checkRedundancy(string &s) {
        // code here
        int count=0;
        stack<int>st;
        for(auto it:s){
            if(it=='('){
                st.push(0);
            }
            else if(it==')'){
                if(st.top()<=1)return true;
                st.pop();
            }
            else if(!st.empty()){
                int x=st.top();
                st.pop();
                x++;
                st.push(x);
            }
        }
        return false;
    }
};
