void fun(Node* node,vector<int> &ans){
    if(node==NULL)
        return;
    if(node->left==NULL && node->right)
        ans.push_back(node->right->data);
    else if(node->right==NULL && node->left)
        ans.push_back(node->left->data);

    
    fun(node->left,ans);
    fun(node->right,ans);
    return;
}

 

vector<int> noSibling(Node* node)
{
    // code here
    vector<int> ans;
    fun(node,ans);
    if(ans.size())
        sort(ans.begin(),ans.end());
    else
        ans.push_back(-1);
    return(ans);
}
