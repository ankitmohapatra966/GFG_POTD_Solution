class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
    // Your Code Here
    int n=arr.size();
    int maxProd=INT_MIN;
    int prefix=1;
    for(int i=0;i<n;i++){
        if(prefix==0) prefix=1;
        prefix=prefix*arr[i];
        maxProd=max(prefix,maxProd);
    }
    int suffix=1;
    for(int i=n-1;i>=0;i--){
        if(suffix==0) suffix=1;
        suffix=suffix*arr[i];
        maxProd=max(suffix,maxProd);
    }
    return maxProd;
}
};
