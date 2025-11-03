class Solution {
  public:
    void topoSort(vector<int> adj[], int V, vector<int>& safe, vector<int>& indegree){
        queue<int> bfsQ;
        for(int i=0;i<V;i++) {
            if(indegree[i]==0) bfsQ.push(i);
        }
        while(!bfsQ.empty()){
            int curr=bfsQ.front();
            bfsQ.pop();
            safe.push_back(curr);
            for(auto nbr:adj[curr]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                    bfsQ.push(nbr);
                }
            }
        }
    }
    vector<int> safeNodes(int V, vector<vector<int>>& edges) {
        vector<int> safe, indegree(V,0);
        vector<int> adj[V];
        for(auto& e:edges){
            adj[e[1]].push_back(e[0]);
            indegree[e[0]]++;
        }
        topoSort(adj, V, safe, indegree);
        return safe;
    }
};
