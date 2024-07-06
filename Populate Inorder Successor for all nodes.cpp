class Solution {
  public:
    void inorder(Node* root, vector<Node*> &in)
    {
        if(!root)
        {
            return;
        }
        
        inorder(root->left, in);
        in.push_back(root);
        inorder(root->right, in);
    }
    
    void populateNext(Node *root) {
        vector<Node*> in;
        
        inorder(root, in);
    
        for(int i = 0; i < in.size() - 1; i++)
        {
            in[i]->next = in[i+1];
        }
        
        root= in[0];
        
    }
};
