class Solution {
  public:
    // Function to check whether the list is palindrome.
     bool isPalindrome(Node *head) {
        // Your code here
        if(!head) return true;
        vector<int> node;
        Node* curr = head;
        while(curr){
            node.push_back(curr->data);
            curr = curr->next;
        }
        int f = 0, l = node.size()-1;
        while(f<=l){
            if(node[f]!= node[l]) return false;
            f++;
            l--;
        }
        return true;
    }
};
