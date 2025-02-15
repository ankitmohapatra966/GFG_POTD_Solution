class Solution {
  public:
    Node* LCA(Node* root, Node* n1, Node* n2) {
        // code here
        Node*cur=root;
        if(!root) return NULL;
        while(cur) {
              if(n1->data<cur->data && n2->data<cur->data) 
                      cur=cur->left;
              else if(n1->data>cur->data && n2->data>cur->data)
                   cur=cur->right;
              else  break;
        }
        return cur;
        
    }
};
