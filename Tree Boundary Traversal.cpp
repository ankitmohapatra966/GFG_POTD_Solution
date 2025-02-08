class Solution {
  public:
    void solveleft(Node * root  , vector<int>&ans){
        if(!root|| !root->left &&!root->right) return ; 
        
        ans.push_back(root->data); 
        
        if(root->left){
            solveleft(root->left,ans) ; 
        }else{
            solveleft(root->right,ans); 
        }
    }
  
    void solveleaf(Node* root, vector<int>&ans){
        if(!root) return ; 
        
        if(!root->left && !root->right) {
            ans.push_back(root->data); return  ; 
        }
        
        solveleaf(root->left,ans); 
        solveleaf(root->right,ans); 
    }
    
    void solveright(Node* root,vector<int>&ans){
        if(!root|| !root->left &&!root->right) return ;
        if(root->right){
            solveright(root->right,ans); 
        }else{
            solveright(root->left,ans); 
        }
        ans.push_back(root->data); 
    }
    vector<int> boundaryTraversal(Node *root) {
       vector<int>ans;
         if(!root) return ans; 
         ans.push_back(root->data); 
         if(!root->left&&!root->right) {
                   return ans ; 
         }
         solveleft(root->left,ans); 
         solveleaf(root,ans); 
         solveright(root->right,ans); 
         
         return ans; 
         
    }
};
