class Solution {
  public:
    int countTriangles(vector<int>& arr) {
        // code here
        int cnt=0,n=arr.size(),sum=0,a,b;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                sum=arr[i]+arr[j];
                a=lower_bound(arr.begin(),arr.end(),sum)-arr.begin();
                if(arr[a]>=sum||a==n)
                a--;
                cnt+=max(a-j,0);
            }       
        }
        return cnt;
    }
};
