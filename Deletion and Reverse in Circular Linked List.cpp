class Solution {
  public:
    Node* reverse(Node* head) {
        Node *curr=head,*temp=NULL,*prev=NULL;
        do{
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }while(curr!=head);
        head->next=prev;
        return prev;
    }


    Node* deleteNode(Node* head, int key) {
        Node *temp=head;
        if(temp->data==key){
            Node *curr=head;
            while(curr->next!=head)curr=curr->next;
            curr->next=temp->next;
            return curr->next;
        }
        else{
            temp=head;
            bool found=false;
            while(temp->next!=head){
                if(temp->next->data==key){
                    found=true;
                    break;
                }
                temp=temp->next;
            }
            if(found)temp->next=temp->next->next;
            return head;
        }
    }
};
