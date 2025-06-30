class Solution {
  public:
    bool check(int t, int n, int k, int w, vector<int>&arr){
        int currWater=0;
        int dayUsed=0;
        vector<int>water(n+1, 0);
        
        for(int i=0; i<n; i++){
            currWater+=water[i];
            int currHeight=arr[i]+currWater;
            if(currHeight<t){
                int need=t-currHeight;
                dayUsed+=need;
                if(dayUsed>k) return false;
                currWater+=need;
                water[i]+=need;
                if(i+w<=n){
                    water[i+w]-=need;
                }
            }
        }
        
        return true;
    }
  
    int maxMinHeight(vector<int> &arr, int k, int w) {
        // code here
        int n=arr.size();
        int lo = *min_element(arr.begin(), arr.end());
        int hi=lo+k;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(mid, n, k, w, arr)){
                lo=mid+1;
            }else hi=mid-1;
        }
        return hi;
    }
};
