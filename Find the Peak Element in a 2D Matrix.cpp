class Solution {
  public:
    vector<int> findPeakGrid(vector<vector<int>> &mat) {
        // code here
        int n = mat.size(), m = mat[0].size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int f = 1;
                if(i + 1 < n && mat[i + 1][j] > mat[i][j]) f = 0; 
                if(i - 1 >= 0 && mat[i - 1][j] > mat[i][j]) f = 0; 
                if(j + 1 < m && mat[i][j + 1] > mat[i][j]) f = 0; 
                if(j - 1 >= 0 && mat[i][j - 1] > mat[i][j]) f = 0;
                if(f) return {i, j};
            }
        }
        return {-1, -1};
    }
};
