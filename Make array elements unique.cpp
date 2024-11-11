class Solution {
  public:
    int minIncrements(vector<int> arr) {
        sort(arr.begin(),arr.end());
        int res = 0, maxLast = arr[0];
        for ( int i = 1; i<arr.size(); i++ ){
            if ( arr[i] == arr[i-1] ){
                arr[i]++; res++;
            }
            if ( arr[i] < maxLast ){
                res += maxLast-arr[i]+1;
                arr[i] = maxLast+1;
            } maxLast = max(maxLast, arr[i]);
        } return res;
    }
};
