class Solution
{
    public:
    void rec(Node* root, int i, int j,map<int,int> &mp)
    {
        if(root==NULL) return;
        mp[i-j] +=root->data;
        rec(root->left,i+1,j-1,mp);
        rec(root->right,i+1,j+1,mp);
    }
    vector <int> diagonalSum(Node* root) 
    {
        map<int,int> mp;
        vector<int> ans;
        rec(root,0,0,mp);
        for(auto val : mp) ans.push_back(val.second);
        return ans;
    }
};
