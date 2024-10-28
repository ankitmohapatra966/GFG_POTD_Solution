class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        int n=arr.size();
        int num[100]={0};  
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(num[arr[i]]==0)
            {
                ans.push_back(arr[i]);
                num[arr[i]]+=1;
            }
        }
        return ans;
    }
};
