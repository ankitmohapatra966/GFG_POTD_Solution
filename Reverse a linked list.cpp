class Solution {
  public:
    Node* reverseList(struct Node* head) {
        if(head==NULL||head->next==NULL)return head;
     
       Node* ans = reverseList( head->next);
       head->next->next=head;
       head->next=NULL;
        
        return ans;
    }
};
