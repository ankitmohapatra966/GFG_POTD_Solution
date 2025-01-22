class Solution {
  public:
    void insertattail(Node* &head, Node* &tail, int digit) {
        Node* temp = new Node(digit);
        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        while (curr != NULL) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    Node* add(Node* a, Node* b) {
        int carry = 0;
        Node* anshead = NULL;
        Node* anstail = NULL;
        while (a != NULL || b != NULL || carry != 0) {
            int value1 = (a != NULL) ? a->data : 0;
            int value2 = (b != NULL) ? b->data : 0;
            int sum = value1 + value2 + carry;
            int digit = sum % 10;
            insertattail(anshead, anstail, digit);
            carry = sum / 10;
            if (a != NULL) a = a->next;
            if (b != NULL) b = b->next;
        }
        return anshead;
    }

    Node* addTwoLists(Node* num1, Node* num2) {
        Node* Num1 = reverse(num1);
        Node* Num2 = reverse(num2);
        Node* ans = add(Num1, Num2);
       Node * final=reverse(ans);
       if(final->data==0){
           Node *w=final->next;
           Node* deletenode=final;
           deletenode->next=NULL;
           delete deletenode;
           final=w;
           
       }
       return final;
    }
};
