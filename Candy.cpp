class Solution {
  public:
    int minCandy(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>cnt(n, 1);
        for(int i=0;i<n-1;i++){
            if(arr[i+1]>arr[i])cnt[i+1]=cnt[i]+1;
        }
        for(int i=n-1;i>0;i--){
            if(arr[i-1]>arr[i])cnt[i-1]=max(cnt[i-1],cnt[i]+1);
        }
        int count=0;
        for(int i=0;i<n;i++){
            count+=cnt[i];
        }
        return count;
    }
};

