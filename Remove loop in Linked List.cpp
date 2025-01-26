void removeLoop(Node* head) {
        if(head==NULL)return ;
        Node* slow=head;
        Node* fast =head;
        while(slow!=NULL&&fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                slow =head;
              break;
            }
        }
        if(fast==NULL||fast->next==NULL||slow==NULL)return ;
          while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
         }
         
         while(slow->next!=fast){
             slow=slow->next;
         }
        slow->next=NULL;
      
    }
