class Solution {
  public:
    // Return the Kth smallest element in the given BST
    void solve(Node* root,priority_queue<int>&pq,int k){
        if(root==NULL) return;
        solve(root->left,pq,k);
        pq.push(root->data);
        if(pq.size()>k) pq.pop();
        solve(root->right,pq,k);
    }
    int kthSmallest(Node *root, int k) {
        // add code here.
        if(root==NULL) return -1;
        priority_queue<int>pq;
        solve(root,pq,k);
        if(pq.size()<k) return -1;
        return pq.top();
    }
};
