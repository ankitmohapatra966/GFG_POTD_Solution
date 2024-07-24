class Solution {

  public:

     void tree(Node* &root ,vector<int> &bst){
        if(root==NULL)return;
        tree(root-> left , bst);
        bst.push_back(root -> data);
        tree(root-> right , bst);
        return ;
         }
    bool isBST(Node* root) {

         vector<int> bst;
        tree(root , bst);
        for(int i =0 ; i< bst.size() -1; i++){
            if(bst[i]>= bst[i+1]) return false;
        }
        return true;
    }
};
