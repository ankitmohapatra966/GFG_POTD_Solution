class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        int n = arr.size();
    
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
    
        int i = 0, j = 0, platform = 0, maxi = 0;
    
        while (i < n && j < n) {
            if (arr[i] <= dep[j]) {  
                platform++;
                maxi = max(maxi, platform);
                i++;
            } else {  
                platform--;
                j++;
            }
        }
    
        return maxi;
    }
};
