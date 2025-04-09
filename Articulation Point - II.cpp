class Solution {
  public:
    void dfs(int u, int parent, vector<int> adj[], vector<bool> &visited,
             vector<int> &disc, vector<int> &low, vector<int> &isAP, int &timer) {
        
        visited[u] = true;
        disc[u] = low[u] = timer++;
        int children = 0;

        for (int v : adj[u]) {
            if (v == parent) continue;

            if (!visited[v]) {
                dfs(v, u, adj, visited, disc, low, isAP, timer);
                low[u] = min(low[u], low[v]);

                if (parent != -1 && low[v] >= disc[u]) {
                    isAP[u] = 1;
                }
                children++;
            } else {
                // back edge
                low[u] = min(low[u], disc[v]);
            }
        }

        if (parent == -1 && children > 1) {
            isAP[u] = 1;
        }
    }

    vector<int> articulationPoints(int V, vector<vector<int>>& edges) {
        vector<int> adj[V];
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<bool> visited(V, false);
        vector<int> disc(V, -1), low(V, -1), isAP(V, 0);
        int timer = 0;

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs(i, -1, adj, visited, disc, low, isAP, timer);
            }
        }

        vector<int> res;
        for (int i = 0; i < V; i++) {
            if (isAP[i]) res.push_back(i);
        }

        if (res.empty()) return {-1};
        return res;
    }
};
