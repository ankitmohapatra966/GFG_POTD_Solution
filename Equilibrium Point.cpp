class Solution {
  public:
    // Function to find equilibrium point in the array.
     int findEquilibrium(vector<int> &arr) {
        int sum = 0;
        int tsum = accumulate(arr.begin(),arr.end(),0);
        
        for(int i = 0; i< arr.size(); i++){
            if(sum== (tsum-arr[i]-sum)) return i; 
            sum+=arr[i]; 
        }
        
        return -1; 
    }
};
