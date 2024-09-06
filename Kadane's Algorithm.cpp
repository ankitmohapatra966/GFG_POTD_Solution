class Solution {
  public:
   
    int maxSubarraySum(vector<int> &arr) {
        int ans = arr[0];
        
        int currentmax = arr[0];
        if(currentmax < 0)  
            currentmax = 0;
        
        int n = arr.size();
        for(int i=1;i<n;i++)
        {
            currentmax += arr[i];
            
            ans = max(ans, currentmax);
            
            if(currentmax < 0)  
                currentmax = 0;
        }
        return ans;
    }
};
