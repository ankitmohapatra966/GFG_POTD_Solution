class Solution {
  public:
    int ans;
    void solve(Node* root){
        if(!root){
            return;
        }
        solve(root->left);
        ans++;
        solve(root->right);
    }
    
    int getSize(Node* root) {
        ans = 0;
        solve(root);
        return ans;
    }
};
