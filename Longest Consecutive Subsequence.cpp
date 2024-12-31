class Solution {
  public:
     int longestConsecutive(vector<int>& arr) {
        // Your code here
        sort(arr.begin(), arr.end());
        int ans=1;
        int count=1;
        for(int i=0 ; i<arr.size()-1; i++){
            if(arr[i]+1==arr[i+1]){
             count++;
             ans= max(ans, count); 
             
            }
            else{
                if(arr[i]!=arr[i+1])
                count=1;
            }
        }
        return ans;
    }

};
