class Solution {
  public:
   int uniquePaths(vector<vector<int>> &grid) {
       int n = grid.size();
       int m = grid[0].size();
       if(grid[0][0] == 1)return 0;
       grid[0][0] = 1;
       for(int i = 0;i<n;i++){
           for(int j = 0;j<m;j++){
               if(i ==0 && j ==0)continue;
               else if(grid[i][j] == 1)grid[i][j] = 0;
               else if(i == 0)grid[i][j] = grid[i][j-1];
               else if(j == 0)grid[i][j] = grid[i-1][j];
               else grid[i][j] = grid[i-1][j] + grid[i][j-1];
           }
       }
       return grid[n-1][m-1];
    }
    
};
