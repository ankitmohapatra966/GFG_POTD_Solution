class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        // Your code here
        unordered_map<int,int>m;
        m[0]=1;
        int sm=0,ans=0;
        for(int &x:arr)sm+=x,ans+=m[sm-tar],m[sm]++;
        return ans;
    }
};
