class Solution {
  public:
    long long minCost(vector<long long>& arr) {
        
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        
        long long n=arr.size();
        for(long long i:arr) pq.push(i);
        
        long long cost=0;
        while(1LL*pq.size()>1){
            long long top1=pq.top();pq.pop();
            long long top2=pq.top();pq.pop();
            cost+=top1+top2;
            pq.push(top1+top2);
        }
        return cost;
    }
};
