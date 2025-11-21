class Solution {
public:
    const long long INF = 1e18;

    vector<long long> dijkstra(int V, int src, vector<vector<pair<int,int>>> &adj) {
        vector<long long> dist(V, INF);
        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> pq;

        dist[src] = 0;
        pq.push({0, src});

        while(!pq.empty()) {
            auto [d, u] = pq.top(); pq.pop();
            if(d != dist[u]) continue;

            for(auto &p : adj[u]) {
                int v = p.first;
                int w = p.second;

                if(dist[v] > d + w) {
                    dist[v] = d + w;
                    pq.push({dist[v], v});
                }
            }
        }
        return dist;
    }

    int shortestPath(int V, int a, int b, vector<vector<int>> &edges) {
        // Build adjacency list with ONLY straight edges
        vector<vector<pair<int,int>>> adj(V);

        for(auto &e : edges) {
            int x = e[0], y = e[1], w1 = e[2];
            adj[x].push_back({y, w1});
            adj[y].push_back({x, w1});
        }

        // Run Dijkstra from a and b (using straight edges only)
        vector<long long> distA = dijkstra(V, a, adj);
        vector<long long> distB = dijkstra(V, b, adj);

        long long ans = distA[b];   // path without curved edges

        // Try using each curved edge once
        for(auto &e : edges) {
            int x = e[0], y = e[1], w2 = e[3];

            // a -> x -> curved -> y -> b
            if(distA[x] != INF && distB[y] != INF)
                ans = min(ans, distA[x] + w2 + distB[y]);

            // a -> y -> curved -> x -> b
            if(distA[y] != INF && distB[x] != INF)
                ans = min(ans, distA[y] + w2 + distB[x]);
        }

        if(ans >= INF) return -1;
        return (int)ans;
    }
};
