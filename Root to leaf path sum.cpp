class Solution {
public:
    bool hasPathSum(Node* root, int target) {
        if (root == nullptr) {
            return false;
        }
        if (root->left == nullptr && root->right == nullptr) {
            return target == root->data;
        }
        int remainingSum = target - root->data;
        return hasPathSum(root->left, remainingSum) || hasPathSum(root->right, remainingSum);
    }
};
