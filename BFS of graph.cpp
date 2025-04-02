class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        queue<int> q;
        vector<int> ans;
        map<int,bool> mp;
        mp[0] = 1;        
        q.push(0);
        while(!q.empty()) {
            auto temp = q.front();
            q.pop();
            ans.push_back(temp);
            for (auto i:adj[temp]) {
                if (mp[i] == 0) {
                    mp[i] =1;
                    q.push(i);
                }
            }
            
        }
        return ans;
    }
};
