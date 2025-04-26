class Solution {
  public:
    int count(Node* tree){
       if(!tree)
       return 0;
       else 
       return 1 + count(tree->left) + count(tree->right);
   }
   bool check(Node* tree, int i,int c){
       if(!tree)
       return 1;
       if(i >= c)
       return 0;
       int l = 0, r = 0;
       if(tree->left)
       l = tree->left->data;
       if(tree->right)
       r = tree->right->data;
       if(tree->data < l || tree->data < r)
       return 0;
       return check(tree->left,2*i+1,c) && check(tree->right,2*i+2,c);
   }
    bool isHeap(Node* tree) {
        // code here
        int c = count(tree);
        int i = 0;
        return check(tree,i,c);
    }


};
