class Solution {
  public:
    // Function to rotate a linked list.
        Node* rotate(Node* head, int k) {
        // Your code here
         if (head == nullptr || k == 0) {
            return head;
        }


        Node* current = head;
        int len = 1; 
        while (current->next != nullptr) {
            current = current->next;
            len++;
        }

    
        if (k>len) {
            return head;
        }
        Node* ptr=head;
        current->next=head;
        for(int i=0;i<(len-(len-k))-1;i++){
            ptr=ptr->next;
        }
        Node* new_head=ptr->next;
        ptr->next=NULL;
        return new_head;
    }

};
