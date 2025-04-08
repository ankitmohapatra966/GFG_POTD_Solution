class Solution {
  public:
  
    void dfs(int i,vector<int> adj[],vector<int> &vis){
        vis[i]=1;
        for(auto j:adj[i]){
            if(!vis[j]){
                dfs(j,adj,vis);
            }
        }
    }
    bool isBridge(int n, vector<vector<int>> &edges, int c, int d) {
        // Code here
        int ans=0;
        vector<int> adj[n];
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int> vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans++;
                dfs(i,adj,vis);
            }
        }
        int ans2=0;
        vector<int> adj2[n];
        for(auto it: edges){
            if(( it[0]==c && it[1]==d ) || ( it[1]==c && it[0]==d )){
                continue;
            }
            adj2[it[0]].push_back(it[1]);
            adj2[it[1]].push_back(it[0]);
        }
        vector<int> vis2(n,0);
        for(int i=0;i<n;i++){
            if(!vis2[i]){
                ans2++;
                dfs(i,adj2,vis2);
            }
        }
        
        return ans!=ans2;
        
    }
};
