class Solution {
  public:
  bool ancestor(vector<int>&ans,struct Node *root,int target){
      if(root==NULL){
          return false;
      }
      if(ancestor(ans,root->left,target)){
          ans.push_back(root->data);
          return true;
      }
      if(root->data==target){
          return true;
      }
      if(ancestor(ans,root->right,target)){
          ans.push_back(root->data);
          return true;
      }
      return false;
  }
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target) {
        
        vector<int>ans;
        ancestor(ans,root,target);
        return ans;
    }
};
