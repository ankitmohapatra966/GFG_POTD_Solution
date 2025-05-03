class Solution {
  public:
    bool isprime(int d){
        if(d<=1) return false;
        for(int i=2;i<=sqrt(d);i++){
            if(d%i==0) return false;
        }
        return true;
    }
    Node *primeList(Node *head) {
        // code here
        Node *temp=head;
        while(temp!=NULL){
            if(isprime(temp->val)){
                temp=temp->next;
            }
            else{
                int temp1=temp->val;
                int temp2=temp->val;
                while((!isprime(temp1)) && (!isprime(temp2))){
                    temp1++;
                    temp2--;
                }
                if((isprime(temp1)) && (isprime(temp2))){
                    if(abs((temp->val)-temp1)==abs((temp->val)-temp1)){
                    temp->val=min(temp1,temp2);
                    }
                }
                if(isprime(temp1)){temp->val=temp1;}
                if(isprime(temp2)){temp->val=temp2;}
                temp=temp->next;
            }
        }
        return head;
    }
};
