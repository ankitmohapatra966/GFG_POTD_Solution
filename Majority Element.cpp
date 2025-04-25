class Solution {
    public:
        int countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
            int res = 0;
    
            for (int i = 0; i < nums.size(); i++) {
                int cnt = 0;
                for (int j = i; j < nums.size(); j++) {
                    if (nums[j] % modulo == k) cnt++;
                    if (cnt % modulo == k) res++;
                }
            }
            return res;
        }
    };
