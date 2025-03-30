class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        // Your code here
        int cur = 0;
        int pre = 0;
        
        int ans = 0;
        
        int n=gas.size();
        for(int i=0;i<n;i++){
            cur+=(gas[i]-cost[i]);
            if(cur<0){
                pre+=cur;
                cur=0;
                ans = i+1;
            }
        }
        return (cur+pre)>=0?ans:-1;
        
    }
};

