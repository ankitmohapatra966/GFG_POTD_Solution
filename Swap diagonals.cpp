class Solution {
  public:
    void swapDiagonal(vector<vector<int>> &mat) {
        // code here
         int n = mat.size();
        for(int i = 0 ; i <n ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                if(i==j)
                {
                    swap(mat[i][j] , mat[i][n-i-1]);
                }
            }
        }
    }
};
