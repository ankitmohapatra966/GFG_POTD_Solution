class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        int cnt=0;
        Node*head1=head;
        while(head1!=NULL){
            head1=head1->next;
            cnt++;
        }
        if(cnt==1) return NULL;
        int c=1;
        Node*head2=head;
        while(c<cnt/2){
            head2=head2->next;
            c++;
        }
        head2->next=(head2->next)->next;
        head2=head2->next;
        return head;
    }
};
