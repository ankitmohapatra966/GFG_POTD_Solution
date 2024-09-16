class Solution {
  public:
    int maxLength(string& str) 
    {
        int n = str.size();
        stack<pair<char, int>> st;
        
        for(int i=0;i<n;i++)
        {
            if(st.empty() || str[i] == '(') st.push({str[i], i});
            else if(st.top().first == '(') st.pop();
            else st.push({str[i], i});
        }
        if(st.empty()) return n;
        int ans = 0;
        int last = n;
        while(!st.empty())
        {
            ans = max(ans, last-st.top().second-1);
            last = st.top().second;
            st.pop();
        }
        ans = max(ans, last);
        return ans;
    }
};
