class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int mx = *max_element(arr.begin(),arr.end());
        int ans = -1;
        for(auto& e: arr) if(e != mx) ans = max(e, ans);
        return ans;
    }
};
