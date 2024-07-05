class Solution {
  public:
    void solve(Node* root,int &mini,int &maxi,int i){
        if(root==NULL)
        return;
        mini=min(mini,i);
        maxi=max(maxi,i);
        solve(root->left,mini,maxi,i-1);
        solve(root->right,mini,maxi,i+1);
    }
    int verticalWidth(Node* root) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        solve(root,mini,maxi,0);
        return abs(mini)+abs(maxi)+1;
    }
};
