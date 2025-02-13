class Solution {
  public:
    bool solve(Node *root, int target,unordered_map<int,int>&mp){
        if(root==NULL) return false;
        bool flag=false;
        int req=target-root->data;
        if(mp.find(req)!=mp.end()) flag=true;
        mp[root->data]++;
        flag=flag||solve(root->left,target,mp);
        flag=flag||solve(root->right,target,mp);
        return flag;
    }
    bool findTarget(Node *root, int target) {
        // your code here.
        unordered_map<int,int>mp;
        return solve(root,target,mp);
    }
};
