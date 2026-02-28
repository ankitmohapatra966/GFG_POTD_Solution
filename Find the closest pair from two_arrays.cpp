class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        int i = 0, j = arr2.size()-1, mxdiff = INT_MAX;
        vector<int> res;
        while(i<arr1.size() and j>=0){
            int sum = arr1[i] + arr2[j];
            int diff = abs(x - sum);
            if(diff < mxdiff){
                mxdiff = diff;
                res = vector<int>{arr1[i], arr2[j]};
            }
            
            if(sum>x)j--;
            else i++;
        }
        return res;
    }
};
