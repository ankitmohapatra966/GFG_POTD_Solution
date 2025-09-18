class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;
        
        for (int i = 2*n - 1; i >= 0; i--) {
            int ele = arr[i % n];
            
            while (!st.empty() && st.top() <= ele) {
                st.pop();
            }
            
            if (i < n) {
                ans[i] = st.empty() ? -1 : st.top();
            }
            
            st.push(ele);
        }
        
        return ans;
    }
};
