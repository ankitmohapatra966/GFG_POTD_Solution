class Solution {
  public:
    int countTriangles(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size(), ans = 0;
        for(int i = 0; i < n; i++)
            for(int j = i+1; j < n; j++)
                ans += lower_bound(arr.begin()+j+1, arr.end(), arr[i]+arr[j]) - arr.begin()-j-1;
        return ans;
    }
};
