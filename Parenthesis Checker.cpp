class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>st;
        for(auto i:x){
            if(st.empty() || i=='(' || i=='{' || i=='[') st.push(i);
            else{
                if((st.top()=='(' && i==')') || (st.top()=='{' && i=='}')|| (st.top()=='[' && i==']'))
                                 st.pop();
                                 else st.push(i);
            }
        }
        return st.empty();
    }
};
