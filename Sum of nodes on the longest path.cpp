class Solution {
private:
pair<int,int> dfs(Node* root){
    if(!root) return {0,0};
    
    pair<int,int> l = dfs(root->left);
    pair<int,int> r = dfs(root->right);
    
    if(l.first>r.first) return {l.first+1,l.second+root->data};
    else if(r.first>l.first) return {r.first+1,r.second+root->data};
    else return{l.first+1,max(r.second,l.second)+root->data};
}
  public:
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        pair<int,int> ans;
        ans = dfs(root);
        return ans.second;
    }
};
