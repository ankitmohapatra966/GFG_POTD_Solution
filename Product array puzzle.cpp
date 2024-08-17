class Solution {
  public:
    
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        vector<long long int>ans;
         long long  n=1;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(j!=i)
                n=n*nums[j];
            }
             ans.push_back(n);
             n=1;
        }
        return ans;
    }
};
