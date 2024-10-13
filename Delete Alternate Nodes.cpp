class Solution {
  public:
    void deleteAlt(struct Node *head) {
      Node* temp  =head; 
      while(head && head->next){
          Node* del = head->next; 
          head->next = head->next->next; 
          delete del; 
          head  = head->next; 
      }
    }
};
