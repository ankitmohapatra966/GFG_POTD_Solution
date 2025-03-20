class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int n=prices.size();
        vector<int>next(5, 0), curr(5, 0);
        for(int i=n-1; i>=0; i--){
            for(int k=3; k>=0; k--){
                if(k%2==0){
                    curr[k]=max(-prices[i]+next[k+1], next[k]);
                }else{
                    curr[k]=max(prices[i]+next[k+1], next[k]);
                }
            }
            next=curr;
        }
        return next[0];
    }
};
