class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int maxval = 0;
        for(int l : left)
            maxval = max(maxval, l);  
        for(int r : right)
            maxval = max(maxval, n - r); 
        return maxval;
    }
};
