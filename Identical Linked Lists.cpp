bool areIdentical(struct Node *head1, struct Node *head2) {
    if(head1 == NULL && head2 == NULL){
        return true;
    }
    if(head1 != NULL && head2 == NULL){
        return false;
    }
    if(head1 == NULL && head2 != NULL){
        return false;
    }
    
    bool left = areIdentical(head1->next, head2->next);
    
    bool val = head1->data == head2->data;
    
    if(left && val){
        return true;
    }
    else{
        return false;
    }
}
