class Solution {
  public:
    Node *RemoveHalfNodes(Node *root) {
        if(!root)return root;
        Node*l = RemoveHalfNodes(root->left);
        Node*r = RemoveHalfNodes(root->right);
        if(root->left and root->right){
            root->left = l;
            root->right = r;
            return root;
        }
        else if(!root->left and !root->right){
            root->left = l;
            root->right = r;
            return root;
            
        }
        else if(root->left){
            root->left = l;
            return root->left;
        }
        else if(root->right){
            root->right = r;
            return root->right;
        }
        else{
            return nullptr;
        }
    }
};
