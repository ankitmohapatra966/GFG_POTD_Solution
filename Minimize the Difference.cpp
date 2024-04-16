class Solution {
  public:
     int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
        int post_max[n]; 
        int post_min[n];
        post_max[n - 1] = arr[n - 1];
        post_min[n - 1] = arr[n - 1];

        for(int i = n - 2; i >= 0 ; i--){
            post_max[i] = max(post_max[i + 1] , arr[i]);
            post_min[i] = min(post_min[i + 1] , arr[i]);
        }
        
        int min_diff = post_max[k] - post_min[k];
        
        int p_max = arr[0]; 
        int p_min = arr[0];
        for(int i = 1 ; i < n - k ; i++){
            int curr_diff = max(p_max , post_max[i + k] ) - min(p_min , post_min[i + k]);
            min_diff = min(min_diff , curr_diff);
            p_max = max(p_max , arr[i]);
            p_min = min(p_min , arr[i]); 
        }
  
        min_diff = min(min_diff , p_max - p_min);
        
        return min_diff;
    }
};
