class Solution {
  public:
     int countPairs(vector<int> &arr, int target) {
        // Complete the function
        unordered_map<int,int> mp;
        int ans = 0;
        for(int i: arr)
        {
            int sum = target-i;
            if(mp[sum] > 0)
                ans += mp[sum];
            mp[i]++;
        }
        return ans;
    }
};
