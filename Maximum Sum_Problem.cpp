class Solution {
  public:
  int maxi=0;
  int s(int n){
      if(n<12) return n;
      return max(maxi,s(n/2)+s(n/3)+s(n/4));
  }
    int maxSum(int n) {
        // code here.
        return s(n);
        
    }
};
