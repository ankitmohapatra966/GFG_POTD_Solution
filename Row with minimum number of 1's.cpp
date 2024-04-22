class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int mini = INT_MAX ;
        int ans =0;
        for (int i = 0; i < n; ++i) { // Iterate over rows
            int cnt = count(a[i].begin(), a[i].end(), 1);
            if(mini > cnt){
                mini = cnt;
                ans = i+1;
            }
        }
        return ans;
    }
};
