class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        vector<int> ans;
        Node *root=head;
        while(root!=NULL)
        {
            ans.push_back(root->data);
            root=root->next;
        }
        sort(ans.begin(),ans.end());
        
        Node *temp = new Node(ans[0]);
        head=temp;
        for(int i=1;i<ans.size();i++)
        {
            Node *t=new Node(ans[i]);
            temp->next=t;
            temp=temp->next;
        }
        
        return head;
    }

};
