class Solution {
  public:
    // Function to find the height of a binary tree.
    int height(Node* node) {
        // code here
        if(node==NULL){
            return -1;
        }
        return max(height(node->left),height(node->right))+1;
    }
};
