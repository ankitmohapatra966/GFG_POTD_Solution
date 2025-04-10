class Solution {
  public:
    int minCost(vector<vector<int>>& houses) {
        vector<vector<int>>adj(houses.size());
        for(int i=0;i<houses.size();i++)
        {
            for(int j=i+1;j<houses.size();j++)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
        int curr_index=0;
        vector<int>visited(adj.size(),-1);
        pq.push({0,0});
        int res=0;
        while(!pq.empty())
        {
            auto it=pq.top();
            pq.pop();
            int dis=it.first;
            int node=it.second;
            if(visited[node]==1) continue;
            visited[node]=1;
            res+=dis;
            for(auto it:adj[node])
            {
                if(visited[it]==-1)
                {
                    int cost=abs(houses[it][0]-houses[node][0])
                    +abs(houses[it][1]-houses[node][1]);
                    pq.push({cost,it});
                }
            }
        }
        return res;
    }
};
