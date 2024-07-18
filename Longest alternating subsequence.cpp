class Solution {
  public:
    int alternatingMaxLength(vector<int>& arr) {
      
        int n=1,m=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]<arr[i]){
                n=m+1;
            }
             if(arr[i]<arr[i-1]){
                m=n+1; 
            }
            else{
                continue;
            }
        }
        return max(n,m);
    }
};
