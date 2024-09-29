class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        int sum=0;
        for(auto it : arr)
        {
            int x = ceil(it/(float)k);
            sum+=x;
        }
        return sum;
    }
};
