class Solution {
  public:
    vector<int> farMin(vector<int>& arr) {
        int n=arr.size();
        vector<int>suffix(n+1,INT_MAX);
        for(int i=n-1;i>=0;i--)suffix[i]=min(suffix[i+1],arr[i]);
        vector<int>result(n,-1);
        for(int i=0;i<n-1;i++){
            int s=i+1,e=n-1;
            while(s<=e){
                int mid=s+(e-s)/2;
                if(suffix[mid]<arr[i]){
                    result[i]=mid;
                    s=mid+1;
                }else{
                    e=mid-1;
                }
            }
        }
        return result;
    }
};
