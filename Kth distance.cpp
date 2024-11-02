class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
        unordered_map<int,int>mpp;
        for(int i = 0;i<arr.size();i++){
            if(mpp.find(arr[i])!=mpp.end()){
                if(i - mpp[arr[i]]<=k)return true;
            }else{
                mpp[arr[i]] = i;
            }
        }
        return false;
    }
};
