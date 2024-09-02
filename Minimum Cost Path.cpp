class Solution
{
    public:
    #define p pair<int,pair<int,int>>    
    bool isvalid(int r, int c, int n, int m){
        return r >= 0 && c >=0 && r < n && c < m; 
    }
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int> (m, 0));
        vis[0][0] = 1;
         vector<vector<int>> dist(n, vector<int> (m, INT_MAX));
         dist[0][0] = grid[0][0];
        priority_queue<p,vector<p>,greater<p>> pq; 
         pq.push({grid[0][0], {0, 0}});
         while(!pq.empty()){
             int inival = pq.top().first;
             int r = pq.top().second.first;
             int c = pq.top().second.second;
             pq.pop();
             int dr[] = {-1, 0, 1, 0};
             int dc[] = {0, 1, 0, -1};
             for(int i=0; i<4; i++){
                 int newr = dr[i] + r;
                 int newc = dc[i] + c;
                 if(isvalid(newr, newc, n, m) && vis[newr][newc] != 1){
                     if(inival + grid[newr][newc] < dist[newr][newc]){
                         vis[newr][newc] = 1;
                         dist[newr][newc] = inival + grid[newr][newc];
                         pq.push({inival+grid[newr][newc], {newr, newc}});
                     }
                 }
             }
            }
         
         return dist[n-1][m-1];
    }
};
