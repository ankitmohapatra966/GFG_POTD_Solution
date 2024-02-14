class Solution { 
public:vector<vector<int>>ans; 
    int timer=0; 
    void dfs(int node,int parent,vector<int> adj[],vector<int>&vis,vector<int>&dis,vector<int>&low){ 
        vis[node]=1; 
        dis[node]=low[node]=++timer; 
        for(auto it:adj[node]){ 
            if(it==parent)continue; 
            else if(vis[it]==1){ 
                low[node]=min(low[node],dis[it]); 
            } 
            else{ 
                dfs(it,node,adj,vis,dis,low); 
                low[node]=min(low[node],low[it]); 
                if(low[it]>dis[node]){ 
                    ans.push_back({min(it,node),max(it,node)}); 
                } 
            } 
        } 
         
    } 
    vector<vector<int>>criticalConnections(int v, vector<int> adj[]){ 
       vector<int>vis(v,0),dis(v,-1),low(v,-1); 
       for(int i=0;i<v;i++){ 
           if(vis[i]==0){ 
               dfs(i,-1,adj,vis,dis,low); 
           } 
       } 
       sort(ans.begin(), ans.end()); 
       return ans; 
    } 
};