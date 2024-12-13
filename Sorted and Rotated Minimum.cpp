class Solution {
  public:
    int findMin(vector<int>& arr) {
        int min=*min_element(arr.begin(),arr.end());
        return min;
    }
};
