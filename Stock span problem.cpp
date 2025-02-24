class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
             
             while(st.empty()==false && arr[st.top()]<=arr[i])
             st.pop();
             if(st.empty())
             ans.push_back(i+1);
             else
             ans.push_back(i-st.top());
             st.push(i);
        }
        return ans;
    }
};
