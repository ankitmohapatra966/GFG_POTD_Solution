class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        unordered_map<int,int> prefixSum;
        
        int sum = 0;
        int count =0;
        
        for(int i=0;i<arr.size();i++){
            prefixSum[sum]++;
            sum+=arr[i];
            count+=prefixSum[sum-k];
        }
        return count;
    }
};
