class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        
        stack<int> st;
        vector<int> ans;
        int p = 1;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '(') {
                st.push(p);
                ans.push_back(p);
                p++;
            }
            else if (str[i] == ')') {
                if (st.empty()) {
                    ans.push_back(p);
                    p++;
                }
                else {
                    ans.push_back(st.top());
                    st.pop();
                }
            }
        }
        return ans;
    }
};
