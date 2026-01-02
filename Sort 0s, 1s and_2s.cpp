class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int cnt0=0, cnt1=0, cnt2=0;
        int n=arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]==0) cnt0++;
            else if(arr[i]==1) cnt1++;
            else cnt2++;
        }
        
        int idx=0;
        while(cnt0){
            arr[idx++]=0;
            cnt0--;
        }
        while(cnt1){
            arr[idx++]=1;
            cnt1--;
        }
        while(cnt2){
            arr[idx++]=2;
            cnt2--;
        }
        return;
    }
};
