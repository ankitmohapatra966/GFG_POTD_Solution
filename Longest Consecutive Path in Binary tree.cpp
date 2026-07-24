int fun(Node * node, int &maxi){
    if(node == nullptr) return 0;
    int v = 0;
    int a = fun(node->left,maxi);
    int b = fun(node->right,maxi);
    if(node->left != nullptr && node->left->data == node->data + 1){
        v = max(v, 1 + a);
    }
    if(node->right != nullptr &&node->right->data == node->data + 1){
        v = max(v, 1 + b);
    }
    maxi = max(maxi, v);
    return v;
    
}

class Solution {
  public:
    int longestConsecutive(Node* root) {
        // code here
        int ans = 0;
        int x = fun(root , ans);
        if(ans == 0) return -1;
        return ans+1;
        
    }
};
