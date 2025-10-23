class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int,pair<int,int>>> pq;
        for(auto& point:points){
            pq.push({abs(point[0])*abs(point[0])+abs(point[1])*abs(point[1]), {point[0], point[1]}});
            if(pq.size()>k) pq.pop();
        }
        while(!pq.empty()){ 
            ans.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};
