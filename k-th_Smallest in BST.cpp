class Solution {
  public:
   void dfs(Node* node , int &ans ,int &curr , int k){
       if(node == NULL)return;
       dfs(node->left  ,ans , curr ,k);
       curr++;
       if(curr == k)ans = node->data;
       dfs(node->right , ans , curr , k);
       
   }
    int kthSmallest(Node *root, int k) {
        // code here
        int ans = -1,curr = 0;
        dfs(root , ans , curr , k);
        return ans;
        
    }
};
