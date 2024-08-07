class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        vector<int> merge;
        
        for(int i=0; i<arr1.size(); i++)
        {
            merge.push_back(arr1[i]);
        }
        
        for(int j=0; j<arr2.size(); j++)
        {
            merge.push_back(arr2[j]);
        }
        
        sort(merge.begin(), merge.end());
        
        return merge[k-1];
    }
};
