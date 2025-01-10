class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.        
        vector<int> ans;
        int n = arr.size();
        for(int i = 0; i < n - k + 1; i++){
            map<int, int> m;
            for(int j = i; j < i + k; j++){
                m[arr[j]]++;
            }
            int num = m.size();
            ans.push_back(num);
            m.clear();
        }
       return ans;
    }
};
