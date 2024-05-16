class Solution {
public:
    
    int ans=0;
    
    void dfs(int node,int par,vector<int> adj[],vector<int>& size){
        for(auto it:adj[node]){
            if(it==par) continue;
            dfs(it,node,adj,size);
            size[node]+=size[it];
            if(size[it]%2==0) ans++;
        }
    }
    
    int minimumEdgeRemove(int n, vector<vector<int>>edges){
        vector<int> adj[n];
        
        for(auto it:edges){
            adj[it[0]-1].push_back(it[1]-1);
            adj[it[1]-1].push_back(it[0]-1);
        }
        vector<int> size(n,1);
        dfs(0,-1,adj,size);
        return ans;
    }
};
