class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        int xr=0;
        for(int i=0;i<n;i++)
        {
            xr = xr^arr[i];
            xr = xr^(i+1);
        }
        int k = xr&(~(xr-1));
        int ones=0,zeros=0;
        for(int i=0;i<n;i++)
        {
            if(k&arr[i])
            {
                ones = ones^arr[i];
            }
            else{
                zeros = zeros^arr[i];
            }
            if(k&(i+1))
            {
                ones = ones^(i+1);
            }
            else{
                zeros = zeros^(i+1);
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==zeros)
            {
                cnt++;
            }
        }
        if(cnt==2) return {zeros,ones};
        return {ones,zeros};
    }
};
