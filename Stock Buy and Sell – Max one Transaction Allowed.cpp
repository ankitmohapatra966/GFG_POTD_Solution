class Solution {
  public:
     int maximumProfit(vector<int> &A) {
        // code here
        int sum = 0;
        int buy = A[0];
        for(int i=1;i<A.size();i++){
            sum = max(sum,A[i]-buy);
            buy = min(buy,A[i]);
        }
        return sum;
    }
};
