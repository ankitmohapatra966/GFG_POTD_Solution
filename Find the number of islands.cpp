class Solution {
  public:
    int n,m;
    vector<vector<int>> dir={{1,0},{-1,0},{0,-1},{0,1},{1,1},{-1,-1},{1,-1},{-1,1}};
    void solve(vector<vector<char>>& grid , int i, int j){
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]=='0'){
            return;   
        }
        
        grid[i][j]='0';
        
        
        for(auto& k:dir){
            int new_i = i+k[0];
            int new_j = j+k[1];
            
            solve(grid,new_i,new_j);
        }
        
        
    }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int count=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    solve(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};
