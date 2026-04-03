class Solution {
  public:
    vector<int> diagView(vector<vector<int>>  arr) {
    
        int  n = arr.size() , m = arr[0].size();
         vector<int> ans;
         for(int d = 0; d < n + m - 1; d++){
            
            int row = (d < m) ? 0 : d - m + 1;
            int col = (d < m) ? d : m - 1;

            while(row < n && col >= 0){
                ans.push_back(arr[row][col]);
                row++;
                col--;
            }
        }

        return ans;
        
    }
};

