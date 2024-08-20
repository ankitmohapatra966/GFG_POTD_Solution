class Solution {
  public:
  void solve(int &maxi,Node* root){
      
      if(root==NULL)
      return;
      maxi=max(maxi,root->data);
      solve(maxi,root->left);
      solve(maxi,root->right);
      
  }
  void constructGraph(Node* root,vector<int>adj[]){
      
      if(root==NULL)
      return;
      if(root->left){
          adj[root->data].push_back(root->left->data);
          adj[root->left->data].push_back(root->data);
      }
      if(root->right){
          adj[root->data].push_back(root->right->data);
          adj[root->right->data].push_back(root->data);
      }
      constructGraph(root->left,adj);
      constructGraph(root->right,adj);
  }
    int minTime(Node* root, int target) 
    {
        int maxi=-1;
        solve(maxi,root);
        vector<int>adj[maxi+1];
        constructGraph(root,adj);
        queue<pair<int,int>>q;
        vector<bool>visit(maxi+1,false);
        q.push({0,target});
        visit[target]=true;
        int ans=0;
        while(q.empty()==false){
            int dist=q.front().first;
            int u=q.front().second;
            q.pop();
            ans=max(ans,dist);
            for(auto v:adj[u]){
                if(visit[v]==false){
                    visit[v]=true;
                    q.push({dist+1,v});
                }
            }
        }
        return ans;
    }
};
