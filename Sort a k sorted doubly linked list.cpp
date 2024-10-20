class Solution {
  public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>> pq;
        DLLNode *mover1=head,*mover2=head;
        while(mover1){
            pq.push(mover1->data);
            if(pq.size()>k){
                mover2->data=pq.top();
                pq.pop();
                mover2=mover2->next;
            }
            mover1=mover1->next;
        }
        while(!pq.empty()){
            mover2->data=pq.top();
            pq.pop();
            mover2=mover2->next;
        }
        return head;
    }
};
