class Solution {
  public:
    int ans=-1;
    int findMaxForN(Node* root, int n) {
        
        if(root==NULL)
        return 0;
        if(root->key<=n)
        ans=max(ans,root->key);
        findMaxForN(root->left,n);
        findMaxForN(root->right,n);
        return ans;
    }
};
