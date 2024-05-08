class Solution {
  public:
  vector<vector<int>>ans;
  
  void res (Node* root,vector<int>path)
  {
      if(root==NULL)return;
      if(root->left==NULL && root->right==NULL)
      {
          path.push_back(root->data);
          ans.push_back(path);
          return ;
      }
      path.push_back(root->data);
      res(root->left,path);
      res(root->right,path);
      return;
  }
    vector<vector<int>> Paths(Node* root) {
        
        vector<int>path;
        res(root,path);
        return ans;
    }

};
