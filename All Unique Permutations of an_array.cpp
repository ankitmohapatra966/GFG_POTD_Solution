class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        set <vector<int>> s;
        do{
            s.insert(arr);
        }
        while(next_permutation(arr.begin(), arr.end()));
        
        vector<vector <int>> store(s.begin(), s.end());
        return store;
    }
};
