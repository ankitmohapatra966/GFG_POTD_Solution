void constructTree(vector<int> &v, int ind, TreeNode* &node)
{
    node = new TreeNode(v[ind]);
    int leftInd = 2*ind + 1, rightInd = 2*ind + 2;
    if(leftInd < v.size())
    {
        constructTree(v, leftInd, node->left);
    }
    else
    {
        return;
    }
    if(rightInd < v.size())
    {
        constructTree(v, rightInd, node->right);
    }
}
// Function to make binary tree from linked list.
void convert(Node *head, TreeNode *&root) {
    
    vector<int> v;
    Node* temp = head;
    while(temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    constructTree(v, 0, root);
}
