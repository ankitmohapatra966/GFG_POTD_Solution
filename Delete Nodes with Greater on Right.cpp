class Solution {
    private:
    Node* reverse_node(Node* head){
        Node* prev= nullptr;
        Node* curr= head;
        while(curr){
            Node* ford= curr->next;
            curr->next= prev;
            prev= curr;
            curr= ford;
        }
        return prev;
    }
  public:
    Node *compute(Node *head) {
        // code here
        head= reverse_node(head);
        int maxi= head->data;
        Node* curr= head;
        while(curr and curr->next){
            if(curr->next->data < maxi){
                Node* temp= curr->next;
                curr->next = temp->next;
                temp->next= nullptr;
                delete(temp);
                
            }
            else{
                curr = curr->next;
                maxi = curr->data;
            }
        }
        head= reverse_node(head);
        return head;
    }
};
