class Solution {
  public:
   int pairWithMaxSum(vector<int>& arr) {
        if(arr.size()==1){
            return -1;
        }
        int n=arr.size();
        int i=0,j=1;
        int sum=0;
        while(j<n){
            sum=max(sum,arr[i]+arr[j]);
            i++,j++;
        }
        return sum;
    }
};
