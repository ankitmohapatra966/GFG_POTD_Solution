class Solution {
  public:
    int maxSumIS(vector<int>& nums) {
    vector<int>lis=nums;
    
        for(int i=0; i<nums.size(); i++) {
            for(int j=i-1; j>=0; j--) {
                if(nums[i] > nums[j]){
                    lis[i] = max(lis[i], lis[j]+nums[i]);
                }
            }
        }
        return *max_element(lis.begin() , lis.end());
        
    }
};
