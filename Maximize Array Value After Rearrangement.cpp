class Solution {
  public:
    int Maximize(vector<int> arr) {
       sort(arr.begin(),arr.end());
       long long ans=0;
       long long mod=1e9+7;
       for (int i=0;i<arr.size();i++)
       {
           ans=(ans%mod+((long long)arr[i]*i)%mod)%mod;
       }
       return ans;
    }
};
