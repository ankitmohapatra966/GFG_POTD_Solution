class Solution {
  public:    
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        Node* prev = head;
        int sum = 0;
        while(head)
        {
            if(!n)
            {
                sum += head->data;
                sum -= prev->data;
                prev = prev->next;
            }
            else
            {
                sum += head->data;
                n--;
            }
            head = head->next;
        }
        return sum;
    }
};
