class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        return arr[n-1];
    }
};

