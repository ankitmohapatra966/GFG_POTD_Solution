class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int l = 0;
        int h = n-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(arr[mid]-(mid+1)<k){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        
        return l+k;
    }
};
