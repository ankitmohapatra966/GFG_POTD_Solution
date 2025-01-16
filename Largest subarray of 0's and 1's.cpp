class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        int ans = 0;
        int sum = 0;
        unordered_map<int,int> ump;
        for(int i = 0;i < n;i++){
            if(arr[i] == 0)
                sum -= 1;
            else 
                sum +=1;
            if(sum == 0 || ump[sum])
                ans = max(ans,i-ump[sum]+1);
            else if(!ump[sum])
                ump[sum] = i+1;
        }
        return ans;
    }
};
