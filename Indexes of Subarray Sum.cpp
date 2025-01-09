class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
         for(int i=0;i<arr.size();i++)
        {
            int sum=0;
            for(int j=i;j<arr.size();j++)
            {
                sum=sum+arr[j];
                if(sum==target)
                {
                    return {i+1,j+1};
                }
            }
        }
        return {-1};
    }
};
