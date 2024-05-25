class Solution {
  public :
    long long max_Books(int arr[], int n, int k) {
        long long sum = 0, max_sum = 0;
        
        for(int i = 0; i < n; i++)
        {
            sum = 0;
            if(arr[i] > k)
                continue;
            else
            {
                while(i < n && arr[i] <= k)
                {
                    sum += arr[i];
                    i++;
                }
                max_sum = max(max_sum, sum);
            }
        }
        return max_sum;
    }
};
