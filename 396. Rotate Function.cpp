class Solution {
public:
    int maxRotateFunction(vector<int>& nums) 
    {
        int ret = 0;
        int sum = 0;
        int ans = INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            ret += i*nums[i];
            sum += nums[i];
        }
        ans = ret;
        for(int i=0; i<nums.size(); i++)
        {
            ret += sum;
            ret -= (nums.size() * nums[nums.size()-1 - i]);
            ans = max(ans, ret);
        }
        return ans;
    }
};
