class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int jumps = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            int maxiInd = -1;
            int maxi = INT_MIN;
            for(int j=i+1;j<i+1+arr[i];j++){
                if(j >= n-1){
                    jumps++;
                    return jumps;
                }
                if(maxi <= arr[j]+j){
                    maxi = arr[j]+j;
                    maxiInd = j;
                }
            }
            jumps++;
            i = maxiInd-1;
            if(maxiInd == -1){
                
                return -1;
            }
        }
        
        return jumps;
    }
};
