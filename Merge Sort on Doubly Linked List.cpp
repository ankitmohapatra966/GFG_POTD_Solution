class Solution {
public:
    Node* merge(Node* left, Node* right) {
        if (!left) return right;
        if (!right) return left;
        if (left->data < right->data) {
            left->next = merge(left->next, right);
            left->next->prev = left;
            left->prev = NULL;
            return left;
        } else {
            right->next = merge(left, right->next);
            right->next->prev = right;
            right->prev = NULL;
            return right;
        }
    }
    Node* getMiddle(Node* head) {
        if (!head || !head->next) return head;
        
        Node* slow = head;
        Node* fast = head->next;
        
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    Node* sortDoubly(Node* head) {
        if (!head || !head->next) return head;
        Node* mid = getMiddle(head);
        Node* nextToMid = mid->next;
        mid->next = NULL;
        nextToMid->prev = NULL;
        Node* left = sortDoubly(head);
        Node* right = sortDoubly(nextToMid);
        return merge(left, right);
    }
};
