class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        Node* dummy = new Node(-1);
        Node* head = dummy;
        auto cmp = [&](Node* a,Node* b){return a->data > b->data;};
        priority_queue<Node*,vector<Node*>,
        decltype(cmp)>pq(cmp);
        for(auto it:arr){
            pq.push(it);
        }
        while(!pq.empty()){
            Node* temp = pq.top();
            pq.pop();
            dummy->next = new Node(temp->data);
            dummy = dummy->next;
            if(temp->next){
                pq.push(temp->next);
            }
        }
        return head->next;
    }
};
