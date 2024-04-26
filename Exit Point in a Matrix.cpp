class Solution {
  public:
    vector<int> dx = {0,1,0,-1};
    vector<int> dy = {1,0,-1,0};
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        // Code here
        int k = 0, i = 0, j = 0;
        while(i >= 0 && j >= 0 && i < n && j < m){
            if(matrix[i][j] == 1){
                matrix[i][j] = 0;
                k++;
                k = k % 4;
            }
            i += dx[k];
            j += dy[k];
        }
        return {i-dx[k],j-dy[k]};
    }
};
