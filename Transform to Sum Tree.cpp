class Solution {
public:

int toSumTreeRec(Node *root) {
    
    if(!root) {
        return 0;
    }
    
    int oldVal = root->data;
    root->data = toSumTreeRec(root->left) + toSumTreeRec(root->right);
    
    return oldVal + root->data;
}

void toSumTree(Node *root) {
    toSumTreeRec(root);
    return;
}

};
