class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        long long sum1=0;
        long long sum2=0;
        for(auto x:arr)
        sum1+=x;
        for(int i=arr.size()-1;i>=0;i--){
            
            sum2+=arr[i];
            sum1-=arr[i];
            if(sum2==sum1)
            return true;
        }
        return false;
    }
};
