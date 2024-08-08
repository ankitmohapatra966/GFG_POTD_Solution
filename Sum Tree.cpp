class Solution {
  public:
  int f(Node* root){
       if(root==NULL){
           return 0;
       }
        if(root->left==NULL && root->right==NULL){
            return root->data;
        }
        int val=f(root->left)+f(root->right);
        if(val==root->data){
            return 2*val;
        }
        return -1;
  }
    bool isSumTree(Node* root) {
        if(root==NULL){
            return true;
        }
        return f(root)==-1?false:true;
    }
};
