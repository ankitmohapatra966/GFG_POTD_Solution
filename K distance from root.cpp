class Solution
{
    public:
    vector<int> nodes;
    void traverse(struct Node* root, int k) {
        if(!root) return;
        if(k == 0) nodes.push_back(root -> data);
        traverse(root -> left, k - 1);
        traverse(root -> right, k - 1);
    }
    vector<int> Kdistance(struct Node *root, int k) {
        nodes.clear();
        traverse(root, k);
        return nodes;
    }
};
