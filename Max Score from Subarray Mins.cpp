class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int n=arr.size();
        int maxi=0;
        for(int i=1; i<n; i++){
            maxi=max(maxi, arr[i]+arr[i-1]);
        }
        return maxi;
    }
};
