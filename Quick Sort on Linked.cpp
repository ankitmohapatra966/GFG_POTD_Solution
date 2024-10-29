class Solution {
  public:
  Node* Partition(Node* &head,Node* &tail){
      Node* curr=head;
      Node* pivot=head;
      Node* prev=head;
      while(curr!=tail->next){
          if(curr->data<pivot->data)
          swap(curr->data,prev->next->data),prev=prev->next;
          curr=curr->next;
      }
      swap(pivot->data,prev->data);
      return prev;
  }
  void QuickSort(Node* &curr,Node* &tail){
      if(curr==tail || curr==NULL || tail==NULL)
      return;
      Node* ptr=Partition(curr,tail);
      QuickSort(curr,ptr);
      QuickSort(ptr->next,tail);
      return;
  }
    struct Node* quickSort(struct Node* head) {
       Node* curr=head;
        Node* tail=curr;
        while(tail->next!=NULL)
        tail=tail->next;
        QuickSort(curr,tail);
        return head;
    }
};
