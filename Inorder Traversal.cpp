class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        if (root == nullptr) {
            return vector<int>();
        }
        vector<int> path1 = inOrder(root->left);
        path1.push_back(root->data);
        vector<int> path2 = inOrder(root->right);
        path1.insert(path1.end(), path2.begin(), path2.end());

        return path1;
    }
};
