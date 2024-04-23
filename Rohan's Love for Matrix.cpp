class Solution {
  public:
  int mod=1e9+7;
    int firstElement(int n) {
        int a10=1,a11=0;
        for(int i=0;i<n-1;i++){
            int temp=a10+a11;
            a11=a10;
            a10=temp%mod;
        } 
        return a10;
    }
};
