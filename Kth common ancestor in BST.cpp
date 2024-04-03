class Solution
{
    public:
    void getParent(Node* root, map<Node*, Node*> &m)
    {
        if(root==NULL) return;
        if(root->left){
            m[root->left] = root;
            getParent(root->left, m);
        }
        if(root->right){
            m[root->right] = root;
            getParent(root->right, m);
        }
    }
    Node* LCA(Node* root, int p, int q){
        if(root==NULL){
            return NULL;
        }
        if(root->data==p){
            return root;
        }
        if(root->data==q){
            return root;
        }
        Node* l = LCA(root->left, p, q);
        Node* r = LCA(root->right, p, q);
        if(l==NULL){
            return r;
        }
        if(r==NULL ){
            return l;
        }
        return root;
    }

    int kthCommonAncestor(Node *root, int k,int x, int y)
    {
      
        if(root==NULL) return -1;
        Node *lca = LCA(root, x, y);
        map<Node*, Node*> m;
        m[root] = NULL;
        getParent(root, m);
        if(lca==NULL) return -1;
        while(--k){
            lca = m[lca];
            if(lca==NULL) return -1;
        }
        return lca->data;
    }
};
