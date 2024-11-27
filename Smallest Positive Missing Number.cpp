Smallest Positive Missing Number
class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
     int missingNumber(vector<int> &arr) {
        int missing = 1;
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for(int i=0; i<n; i++) if(missing == arr[i]) missing++;
        return missing;
    }
};
