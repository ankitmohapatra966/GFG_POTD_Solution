class Solution{
    public:
    bool solve(Node * root,int min,int max){
        if(root==NULL) return true;
        if(root->data<min || root->data>max){
            return false;
        }
        
        return solve(root->left,min,root->data-1) && 
        solve(root->right,root->data+1,max);
    }
    bool isbst(Node * root){
        bool ans=solve(root,INT_MIN,INT_MAX);
        return ans;
    }
    
    int size(Node * root){
        if(root==NULL) return 0;
        queue<Node *> q;
        q.push(root);
        int count=1;
        while(!q.empty()){
            Node * t=q.front();
            q.pop();
            if(t->left){
                q.push(t->left);
                count++;
            }
            if(t->right){
                q.push(t->right);
                count++;
            }
        }
        return count;
    }
    int largestBst(Node *root)
    {
        int ans=0;
        queue<Node *> q;
        q.push(root);
        while(!q.empty()){
            Node * temp=q.front();
            q.pop();
            if(isbst(temp)){
                ans=max(ans,size(temp));
            }
            
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        return ans;
    }
};
