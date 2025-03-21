class Solution {
  public:
    int findMaxSum(vector<int>& arr) {
        // code here
        int n=(int)arr.size();
        int a=0;
        int b=0;
        for(int i=n-1;i>=0;i--)
        {
            int c=max(a,arr[i]+b);
            b=a;
            a=c;
        }
        return a;
    }
};
