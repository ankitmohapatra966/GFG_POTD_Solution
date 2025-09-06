class Solution {
  public:
    int CalLoopLen(Node* head){
        int len = 0;
        Node* temp = head;
        
        do
        {
            len++;
            temp = temp->next;
            
        }while(temp != head);
        
        return len;
    }
    int GetLoopLen(Node* head){
        Node* fast = head;
        Node* slow = head;
        
        while(fast!=nullptr and fast->next!=nullptr){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                return CalLoopLen(fast);
            }
        }
        
        return 0;
    }
    int lengthOfLoop(Node *head) {
        return GetLoopLen(head);
    }
};
