class Solution {
  public:
    void zigZag(int n, vector<int> &arr) {
        for(int i=1;i<n;i++){
            if(i%2!=0){
                if(arr[i-1]>arr[i]) {
                    swap(arr[i-1],arr[i]);
                }
            }
            else{
                if(arr[i]>arr[i-1]){
                    swap(arr[i],arr[i-1]);
                }
            }
        }
        
    }
};
