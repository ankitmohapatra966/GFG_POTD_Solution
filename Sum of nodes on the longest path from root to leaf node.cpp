class Solution
{
public:
    
      int dep,ans;
    void help(Node* root, int level,int sum){
        if(root==NULL){
            if(level>dep){
                ans = sum;
                dep = level;
            }
            if(level==dep && ans<sum)ans = sum;
            return;
        }
        help(root->left,level+1,sum+root->data);
        help(root->right,level+1,sum+root->data);
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        dep=0;
        ans=0;
        help(root,0,0);
        return ans;
    }
};
