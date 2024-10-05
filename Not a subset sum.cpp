class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        long long ans = 1;
        
        for(auto& e: arr){
            if(e > ans) break;
            ans += e;
        }
        return ans;
    }
};
