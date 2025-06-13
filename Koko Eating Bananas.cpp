class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        int n = arr.size();
        
        int l = 1;
        int r = *max_element(arr.begin(), arr.end());
        int ans = r;
        
        while(l <= r){
            int mid = l + (r-l)/2;
            
            int hour = 0;
            for(int i = 0; i < n; i++){
                hour += (ceil(arr[i]/(1.0*mid)));
                if(hour > k) break;
            }
            
            if(hour <= k){
                ans = min(ans, mid);
                r = mid - 1;
            }
            else l = mid + 1;
        }
        
        return ans;
    }
};
