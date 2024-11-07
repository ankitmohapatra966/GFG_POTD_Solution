class Solution {
  public:
    vector<int> findSplit(vector<int>& arr) {
        int total = 0; vector<int> res;
        for ( auto i : arr ) total += i;
        if ( total%3 != 0 ) return {-1,-1};
        int currSum = 0;
        for ( int i = 0; i<arr.size(); i++ ){
            if ( currSum > total/3 ) return {-1,-1};
            currSum += arr[i];
            if ( currSum == total/3 ){
                res.push_back(i);
                currSum = 0;
            }
        } return res;
    }
};
