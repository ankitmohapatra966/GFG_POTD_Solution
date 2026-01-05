class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int maxi=sum;
        for(int i=k;i<n;i++){
            sum+=arr[i]-arr[i-k];
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};
