class Solution{
    private:
    void solve(int ind,int n,int target,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return ;
        }
        for(int i=ind;i<n;++i)
        {
            if(i>ind and nums[i]==nums[i-1]) continue;
            if(nums[i]>target) break;
            
            temp.push_back(nums[i]);
            solve(i+1,n,target-nums[i],nums,temp,ans);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,n,k,arr,temp,ans);
        return ans;
    }
};
