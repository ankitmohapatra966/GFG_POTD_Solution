class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        // Code here
        if(head->data>x){
            Node* ans=new Node();
            ans->data=x;
            ans->next=head;
            return ans;
        }
        Node* h=head,*n=new Node();
        n->data=x;
        while(h && h->next){
            if(h->next->data>x){
                Node* ele=h->next;
                h->next=n;
                n->next=ele;
                x=INT_MAX;
            }
            h=h->next;
        }
        if(x!=INT_MAX){
            h->next=n;
        }
        
        return head;
    }
};
