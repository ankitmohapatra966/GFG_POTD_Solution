class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int max=INT_MIN,sum=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            sum=arr[i]+arr[i+1];
            if(sum>max)
            {
                max=sum;
            }
        }
        return max;
    }
};
