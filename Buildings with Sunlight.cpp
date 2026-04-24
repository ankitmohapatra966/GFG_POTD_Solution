class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
   
        int count = 1;
        int maxH = arr[0];
        for(int i = 1;i<arr.size();i++)
        {
            if(maxH<=arr[i])
            {
                maxH = arr[i];
                count++;
            }
        }
        
        return count;
    }
};
