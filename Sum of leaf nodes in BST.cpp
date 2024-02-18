class Solution 
{ 
    public: 
        void inorder(Node *root,int &sum) 
     { 
         if(root==NULL) 
         return ; 
        if(root->left==NULL && root->right==NULL) 
      {  sum=sum+root->data; 
        return ;} 
         
        inorder(root->left,sum); 
        inorder(root->right,sum); 
     } 
    public: 
        
        int sumOfLeafNodes(Node *root ){ 
             int sum=0; 
             inorder(root,sum); 
             return sum; 
        } 
};