class Solution {
  public:
    bool check(vector<int>&arr, long long mid, int k){
        int cnt=1;
        long long sum=0;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]>mid){
                cnt++;
                sum=arr[i];
            } else {
                sum+=arr[i];
            }
        }
        return cnt<=k;
    }
    int findPages(vector<int> &arr, int k) {
        if(arr.size()<k) return -1;
        long long lo=*max_element(arr.begin(), arr.end());
        long long hi=accumulate(arr.begin(), arr.end(), 0ll);
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(check(arr,mid,k)) hi=mid-1;
            else lo=mid+1;
        }
        return lo;
    }
};
