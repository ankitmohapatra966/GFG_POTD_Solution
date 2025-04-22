class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int xorr = 0;
        for(int i =0; i<arr.size(); i++) {
            xorr ^= arr[i];
        }
        
        return xorr;
    }
};
