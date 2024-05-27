class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
        unordered_map<int,int>mp;
        int mx = 0;
        for(int i = 0; i < n; i ++){
            int l = a[i] - 1;
            int r = a[i] + 1;
            mp[a[i]] = 1 + max(mp[l], mp[r]);
            mx = max(mx, (int)mp[a[i]]);
        }
        return mx;
        
    }
};
