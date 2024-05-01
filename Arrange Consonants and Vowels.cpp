class Solution
{
    public:

    struct Node* arrangeCV(Node *head)
    {
       if(head==NULL || head->next==NULL)
       return head;
       
       Node *temp=head;
       
       Node *vDummy=new Node(-1);
       Node *cDummy=new Node(-1);
       
       Node *vcur=vDummy;
       Node *ccur=cDummy;
       
       while(temp!=NULL){
           if(temp->data=='a' || temp->data=='e' || temp->data=='i' || temp->data=='o' || temp->data=='u')
           {
               vcur->next=temp;
               vcur=vcur->next;
           }
           else{
               ccur->next=temp;
               ccur=ccur->next;
           }
           
           temp=temp->next;
       }
       
       vcur->next=cDummy->next;
       ccur->next=NULL;
       
       return vDummy->next;
    }
};
