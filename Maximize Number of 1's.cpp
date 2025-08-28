class Solution {
  public:
     int maxOnes(vector<int>& arr, int k) {
        // code here
        int current_result = 0, result = 0;
        int i=0,j=0,used_flip = 0;
        int n=arr.size();
        while(j<n && i<n){
            if(arr[j]==1){
                current_result++;
                j++;
            }else{
               if(used_flip>=k){
                   while(used_flip>=k){
                       if(arr[i]==0) used_flip--;
                       current_result--;
                       i++;
                   }
               }else {
                   used_flip++;
                   j++;
                   current_result++;
               }
            }
            result=max(result,current_result);
        }
        return result;
    }
};
