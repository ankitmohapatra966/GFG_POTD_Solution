class Solution {
  public:
    Node* findFirstNode(Node* head) {
        if(head==NULL)return head;
        unordered_map<Node* , int>mp;
         Node* temp= head;
         while(temp!=NULL){
            if(mp.find(temp)!=mp.end())return temp;
            mp[temp]++;
             temp=temp->next;
         }
         return NULL;
    }
};
