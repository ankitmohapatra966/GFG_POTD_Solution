class Solution {
  public:
    // Function to count nodes of a linked list.
   int getCount(struct Node* head) {

        // Code here
        Node * temp = head;
        int cnt =0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
};
