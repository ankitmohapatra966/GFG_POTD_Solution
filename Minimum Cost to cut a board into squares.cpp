class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        //  code here
        priority_queue<pair<int,int>> pq;
        for(auto i:x) pq.push({i , 0});
        for(auto i:y) pq.push({i , 1});
        int hor_cut = 0,ver_cut = 0,cost = 0;
        while(!pq.empty()){
            auto p = pq.top();
            pq.pop();
            if(p.second == 0){
                hor_cut++;
                cost += p.first * (ver_cut+1);
            }else{
                ver_cut++;
                cost += p.first * (hor_cut+1);
            }
        }
        return cost;
    }
};
