class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        // Your code
        unordered_map<int, int> mp;
        for(auto it: arr){
            mp[it]++;
        }
        int n = arr.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(mp[arr[i]+arr[j]]>0)
                    return true;
            }
        }
        return false;
    }
};
