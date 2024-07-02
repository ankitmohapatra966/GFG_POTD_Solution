class Solution {
  public:
    bool compute(Node* head) {
        
        string ans="";
        Node *temp=head;
        
        while(temp!=NULL){
            ans+=temp->data;
            temp=temp->next;
        }
        
        string rev=ans;
        reverse(ans.begin(),ans.end());
        if(ans==rev)return true;
        return false;
    }
};
