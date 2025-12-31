class Solution {
  public:
   bool isPalindrome(Node *head) {
        if(head->next==nullptr) return true;
        
        stack<int> st;
        Node* t1=head;
        Node* F=head;
        
        for(;F&&F->next;F=F->next->next)
        {
            st.push(t1->data); 
            t1=t1->next;
        }
        
        if(t1->data!=st.top()) t1=t1->next;
        while(t1)
        {
            if(t1->data!=st.top()) return false;
            
            st.pop();
            t1=t1->next;
        }
        if(!st.empty()) return false;
        
        return true;
    }
};
