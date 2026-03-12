class Solution {
  public:
    int kBitFlips(vector<int>& arr, int k) {
        // code here
        vector<int>vec(arr.size()+1, 0);
        int cnt=0;
        for(int i=0;i<=arr.size()-k;i++){
             if(i!=0){
                vec[i]+=vec[i-1];
            }
            if(arr[i]==1){
                if(vec[i]&1){
                    cnt++;
                vec[i]++;
                vec[i+k]--;
                }
            }else if(vec[i]%2==0){
                cnt++;
                vec[i]++;
                vec[i+k]--;
            }
        }
        for(int i=arr.size()-k+1;i<arr.size();i++){
             if(i!=0){
                vec[i]+=vec[i-1];
            }
             if(arr[i]==1){
                if(vec[i]&1){
                    return -1;
                }
            }else if(vec[i]%2==0){
               return -1;
            }
            
        }
        return cnt;
    }
};
