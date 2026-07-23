class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        preorderImplementation(root,ans);
        return ans;
        
    }
    void preorderImplementation(Node* root, vector<int>&ans)
    {
        if(root == NULL)
        {
            return ;
        }
        ans.push_back(root->data);
        preorderImplementation(root->left,ans);
         preorderImplementation(root->right,ans);
        
    }
};
