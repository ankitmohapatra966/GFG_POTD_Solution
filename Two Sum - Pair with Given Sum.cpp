class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) 
    {
        // code here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int s = 0;
        int e = n-1;
        while(s<e)
        {
            int sum = arr[s] + arr[e];
            if(sum == target)
            {
                return true;
            }
            if(sum < target)
            {
                s++;
            }
            else
            {
                e--;
            }
        }
        return false;
    }
};
