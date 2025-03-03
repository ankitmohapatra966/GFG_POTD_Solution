class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        int n = arr.size();
        int maxLen = 0, startIdx = 0;
        multiset<int> window;
        for(int r = 0, l = 0; r < n; r++) {
            window.insert(arr[r]);
            
            while(*window.rbegin() - *window.begin() > x) {
                window.erase(window.find(arr[l]));
                l++;
            }
            
            if(r - l + 1 > maxLen) {
                maxLen = r - l + 1;
                startIdx = l;
            }
        }
        
        return vector<int>(arr.begin() + startIdx, arr.begin() + startIdx + maxLen);
    }
};
