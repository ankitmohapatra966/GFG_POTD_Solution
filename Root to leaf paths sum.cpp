class Solution {
  public:
    int treePathsSum(Node *root, int path = 0) {
        if(root == NULL) return 0;
        if(root -> left == NULL && root -> right == NULL)
            return (path*10 + root -> data);
        return treePathsSum(root -> left, path*10 + root -> data) +
                   treePathsSum(root -> right, path*10 + root -> data);
    }
};
