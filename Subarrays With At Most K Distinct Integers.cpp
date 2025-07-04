class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        int res = 0;
        unordered_map<int, int> mp;
        int start = 0;
        for(int i = 0; i < arr.size(); i++){
            int currEle = arr[i];
            mp[currEle]++;
            while(mp.size() > k){
                mp[arr[start]]--;
                if(mp[arr[start]] == 0){
                    mp.erase(arr[start]);
                }
                start++;
            }
            res += i - start + 1;
        }
        return res;
    }
};
