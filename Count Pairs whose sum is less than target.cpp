class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(),arr.end());
        int ans=0,l=0,r=arr.size()-1;
        while(l<r){
            int sum=arr[l]+arr[r];
            if(sum<target){
                ans+=(r-l);
                l++;
            }
            else{ r--;}
        }
        return ans;
    }
};
