class Solution {
  public:
    int hIndex(vector<int>& c) {
        int n = c.size();
        sort(c.begin(),c.end());
        for(int i=0;i<n;i++){
            if(n-i <= c[i])
            return n-i;
        }
        return 0;
    }
};
