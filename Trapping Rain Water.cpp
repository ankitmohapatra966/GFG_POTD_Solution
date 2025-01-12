class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int ans = 0;
        int n = arr.size();
        int lmax = 0,rmax=0;
        int i=0,j=n-1;
        while(i<j){
            lmax = max(lmax,arr[i]);
            rmax = max(rmax,arr[j]);
            if(arr[i]<=arr[j]){
                ans+=lmax-arr[i];
                i++;
            }
            else{
                ans+=rmax-arr[j];
                j--;
            }
        }
        return ans;
    }
};
