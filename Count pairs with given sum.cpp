class Solution {
  public:
    int countPairs(vector<int> &arr, int target) 
    {
        unordered_map<int,int> a;
        int c = 0;
        
        for(i : arr)
        {
            int k = target - i;
            if(a[k] > 0)
            {
                c += a[k];
            }
            a[i]++;
        }
        return c;
    }
};
