class Solution {
  public:
    bool poss(vector<int> &arr , int mid , int maxi){
        for(int i = 0 ; i < arr.size() ; i++){
           long diff = mid - arr[i];
           mid += diff;
           if(mid >= maxi) return 1;
           if(mid < 0) return 0;
        }
        
        return 1;
    }
    int find(vector<int>& arr) {
        // code here
        int n = arr.size();
        int l = 1;
        int maxi = *max_element(begin(arr) , end(arr));
        int r = maxi + 1;
        int ans = -1;
        while(l <= r){
            int mid = l + (r-l) / 2;
            
            if(poss(arr , mid , maxi)){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return ans;
    }
};
