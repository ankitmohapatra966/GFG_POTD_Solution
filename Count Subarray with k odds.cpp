class Solution {
  public:
    int countSubarrays(vector<int>& arr,const int &k) {
        unordered_map < int, int > mp={{0,1}};
        int sum = 0,ans=0;
        for (int &it:arr) {
            it=(it&1);
            sum += it;
            ans += mp[sum - k];
            mp[sum]++;
        }
        return ans; 
    }
};
