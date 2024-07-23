class Solution {
    void traverse(Node *root, vector<int> &ans){
        if(!root) return;
        traverse(root->left, ans);
        ans.push_back(root->data);
        traverse(root->right, ans);
    }
  public:

    vector<int> merge(Node *root1, Node *root2) {

        vector<int> ans;
        traverse(root1, ans);
        traverse(root2, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
