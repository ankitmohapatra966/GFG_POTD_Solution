class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) 
    {
        int N = arr.size();
        vector<int> NGE(N,0);
        stack<int> st;
        int i = (2*N)-1;
        while(i >= 0)
        {
            while(st.size() and st.top() <= arr[i%N])
            {
                st.pop();
            }
            if(i < N)
            {
                NGE[i] = st.size() ? st.top(): -1;
            }
            st.push(arr[i%N]);
            i--;
        }
        return NGE;
    }
};
