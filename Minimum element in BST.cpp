class Solution {
public:   
    int minValue(Node* root) {
        
         if(!root){
            return 1e9;
        }
        return min( root->data,min( minValue(root->left), minValue(root->right) ) ) ;
    }

};
