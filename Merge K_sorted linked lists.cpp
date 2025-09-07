class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        multiset<int> ms;
        for(int i=0;i<arr.size();++i)
        {
            Node* temp=arr[i];
            for(;temp;temp=temp->next) ms.insert(temp->data);
        }
        
        Node* head=new Node(-1);
        Node* curr=head;
        for(auto &x:ms)
        {
            curr->next=new Node(x);
            curr=curr->next;
        }
        return head->next;
    }
};
