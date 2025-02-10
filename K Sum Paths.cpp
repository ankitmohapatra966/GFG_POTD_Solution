class Solution {
  public:
  void Solve(Node* root,int k,int &ans,unordered_map<int,int>&mp,int sum){
      if(root==NULL)
      return;
      sum+=root->data;
      ans+=mp[sum-k];
      if(sum==k)
      ans++;
      mp[sum]++;
      Solve(root->left,k,ans,mp,sum);
      Solve(root->right,k,ans,mp,sum);
      mp[sum]--;
  }
    int sumK(Node *root, int k) {
        // code here
        int ans=0;
        unordered_map<int,int>mp;
        Solve(root,k,ans,mp,0);
        return ans;
    }
};
