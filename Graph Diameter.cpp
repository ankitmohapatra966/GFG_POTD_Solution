class Solution {
  public:
    int ans = 0;
    int dfs(int src ,vector<bool>&vis ,vector<vector<int>>&adj) {
        vis[src] = true;
        
        priority_queue<int> pq;
        for(auto neigh : adj[src]) {
            if(!vis[neigh]) pq.push(1 + dfs(neigh ,vis ,adj));
        }
        
        if(pq.empty()) return 0;
        
        int first = pq.top();
        pq.pop();
        int second = 0;
        
        if(!pq.empty()) second = pq.top();
        
        ans = max(ans ,first + second);
        return first;
    }
    
    int diameter(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for(auto edge : edges) {
            int u = edge[0] ,v = edge[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> vis(V ,false);
        dfs(0 ,vis ,adj);
        return ans;
    }
};

