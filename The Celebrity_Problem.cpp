class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i = 0; i < n; ++i) {
            int hor = 0, vert = 0;
            for(int j = 0; j < n; ++j) {
                if(i != j) {
                    if(mat[i][j]) hor++;
                    if(mat[j][i]) vert++;
                }
            }
            if(hor == 0 && vert == n-1) return i;
        }
        return -1;
    }
};
