class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int i = 0, j = 0;
        int n = a.size(), m = b.size();
        
        vector<int> ans;
        while(i < n && j < m) {
            if(a[i] < b[j]) ans.push_back(a[i++]);
            else if(a[i] > b[j]) ans.push_back(b[j++]);
            else ans.push_back(a[i++]), j++;
        }
        while(i < n) ans.push_back(a[i++]);
        while(j < m) ans.push_back(b[j++]);
        return ans;
    }
};
