class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        long long sum = arr[n/2]-arr[0];
        int i = 0 , j = n-1 ;
        while(i<j){
            sum+=abs(arr[j]-arr[i])+abs(arr[j]-arr[i+1]);
            i++;j--;
        }
        return sum ;
    }
};
