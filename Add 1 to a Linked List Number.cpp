class Solution {
  public:
    Node* addOne(Node* head) {
        Node* temp = head;
        Node* change = NULL;
        while(temp){
            Node* prev = temp;
            if(temp->next == NULL){
                if(temp->data < 9){
                    temp->data += 1;
                    return head;
                }
                break;
            }
            temp = temp->next;
            if(prev->data!=9 && temp && temp->data==9){
                change = prev;
            }
        }
        if(change==NULL){
            Node* first = new Node(1);
            first->next = head;
            while(head){
                head->data = 0;
                head= head->next;
            }
            return first;
        }
        else{
            change->data += 1;
            change = change->next;
            while(change){
                change->data = 0;
                change= change->next;
            }
            return head;
        }
        return head;
    }
};
