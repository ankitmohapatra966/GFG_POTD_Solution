class Solution {
  public:
    int getSingle(vector<int> &arr) {
        // code here
        int ans=0,x,sum;
        for(int i=0;i<32;i++)
        {
            sum=0;
            x=(1<<i);
            for(int j=0;j<arr.size();j++)
            {
                if(arr[j]&x)
                {
                    sum++;
                }
            }
            if(sum%3!=0)
            {
                ans|=x;
            }
        }
        return ans;
    }
};
