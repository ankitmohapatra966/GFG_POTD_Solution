class Solution {
  public:
    
    void inorder(Node *root,priority_queue<int,vector<int>,greater<int>> &q){
        if(root == NULL){
            return;
        }
        
        inorder(root->left,q);
        q.push(root->data);
        inorder(root->right,q);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        priority_queue<int,vector<int>,greater<int>> q;
        
        inorder(root1,q);
        inorder(root2,q);
        
        
        vector<int> ans;
        
        while(!q.empty()){
            ans.push_back(q.top());
            q.pop();
        }
        
        return ans;
    }
};
