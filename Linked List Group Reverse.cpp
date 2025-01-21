class Solution {
  public:
    Node* reverseKGroup(Node* head, int k) {
    Node* p = NULL;
    Node* q;
    Node* c = head;
    
    int m = k; 
    while (m-- && c) {
        q = c->next;
        c->next = p;
        p = c; 
        c = q;  
    }
    if (head) {
        head->next = reverseKGroup(c, k); 
    }
    return p;
}
};
