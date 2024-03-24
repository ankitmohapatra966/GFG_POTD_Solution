class Solution{
public:
    void insert(stack<int>&st,int x){
        if(st.empty()){
            st.push(x);
            return;
        }
        int t = st.top();
        st.pop();
        insert(st,x);
        st.push(t);
        return;
    }
    stack<int> insertAtBottom(stack<int> st,int x){
        insert(st,x);
        return st;
    }
};
