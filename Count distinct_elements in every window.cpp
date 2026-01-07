class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        vector<int>ans;
        unordered_map<int, int>mpp;

        int i=0, j=0;

        for(; j<n; j++){
            mpp[arr[j]]++;
            for(; i<n && (j-i+1>k); i++){
                mpp[arr[i]]--;
                if(mpp[arr[i]]==0) mpp.erase(arr[i]);
            }
            if(j-i+1==k) ans.push_back(mpp.size());
        }

        return ans;
        
    }
 
};
