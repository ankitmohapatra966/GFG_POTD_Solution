class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        
        unordered_map<int,pair<int,int>>mp;
        int ans=0;
        
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end()){
                int k=mp[arr[i]].first;
                mp[arr[i]]={k,i-k};
            }
            else {
                mp[arr[i]]={i,0};
            }
            ans=max(mp[arr[i]].second,ans);
        }
        
        return ans;
    }
};
