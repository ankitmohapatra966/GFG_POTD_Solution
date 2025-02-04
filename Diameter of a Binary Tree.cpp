class Solution {
  public:
    int height(Node* root,int &max_dia)
    {
        if(!root) return 0;
        
        int lh=height(root->left,max_dia);
        int rh=height(root->right,max_dia);
        
        max_dia=max(max_dia,lh+rh);
        
        return 1+max(lh,rh);
    }
    
    int diameter(Node* root) {
        // Your code here
       if(!root) return 0;
       
       int dia=0;
       
       height(root,dia);
       
       return dia;
    }
};
