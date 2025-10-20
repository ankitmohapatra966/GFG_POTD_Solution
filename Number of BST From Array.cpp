class Solution {
  public:
    vector<int> bsts = {1, 1, 2, 5, 14, 42 };
    vector<int> countBSTs(vector<int>& arr) {
        // Code here
        int n=arr.size();
        vector<int> bstCount;
        for(int i = 0; i<n; i++)
        {
            int l=0, g=0;
            for(int j = 0;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    g++;
                }
                else if(arr[i]>arr[j])
                {
                    l++;
                }
            }
            bstCount.push_back(bsts[l]*bsts[g]);
        }
        return bstCount;
    }
};
