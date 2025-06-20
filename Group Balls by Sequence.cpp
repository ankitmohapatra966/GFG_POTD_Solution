class Solution {
  public:
    bool validgroup(vector<int> &arr, int k) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[arr[i]]++;
        }
        for(int i = 0; i < n; i++){
            int val = arr[i];
            while(mp[val] > 0){
                mp[val]--;
                for(int j = 1; j < k; j++){
                    if(mp[val + j] == 0){
                        return false;
                    }else{
                        mp[val + j]--;
                    }
                }
            }
        }
        return true;
    }
};
