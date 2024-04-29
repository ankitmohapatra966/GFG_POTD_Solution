class Solution {
    public:
    Node* deleteK(Node *head,int K){
    if(K == 1) return nullptr;
    Node* s = head;
    int cnt = 0;
    for(Node* s = head; s != nullptr; s = s->next) {
        cnt++;
        if(cnt == K-1){
            cnt = 0;
            if(s->next)
                s->next = s->next->next;
        }

    }
    return head;
}
};
