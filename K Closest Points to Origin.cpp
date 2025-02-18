class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        auto distance = [](const vector<int>& p) -> double { 
            return sqrt(p[0] * p[0] + p[1] * p[1]); 
        };
    
        auto comp = [distance](const vector<int>& p1, const vector<int>& p2) -> bool { 
            return distance(p1) < distance(p2); 
        };
    
        priority_queue<vector<int>, vector<vector<int>>, decltype(comp)> maxHeap(comp);
        
        for (const auto& point : points) {
            maxHeap.push(point);
            if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }
    
        vector<vector<int>> res;
        while (!maxHeap.empty()) {
            res.push_back(maxHeap.top());
            maxHeap.pop();
        }
    
        return res;
    }
};
