class Solution {
  public:
    void inOrder(Node* root,vector<Node*>&v){
        if(!root) return;
        inOrder(root->left,v);
        v.push_back(root);
        inOrder(root->right,v);
    }
    Node* bToDLL(Node* root) {
        vector<Node*>v;
        inOrder(root,v);
        int n=v.size();
        if(n==1) return root;
        for(int i=0;i<n;i++){
            if(i==0){
                v[i]->left=NULL;
                v[i]->right=v[i+1];
            }
            else if(i==n-1){
                v[i]->left=v[i-1];
                v[i]->right=NULL;
            }
            else{
                v[i]->left=v[i-1];
                v[i]->right=v[i+1];
            }
        }
        return v[0];
    }
};
