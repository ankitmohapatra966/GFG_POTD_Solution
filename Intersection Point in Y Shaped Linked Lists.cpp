class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
        unordered_map<Node*,int> mp;
        while(head1){
            mp[head1] = head1->data;
            head1 = head1->next;
        }
        while(head2){
            if(mp[head2]==head2->data){
                return head2->data;
            }
            head2 = head2->next;
        }
        return -1;
    }
};
