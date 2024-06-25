class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {

        int i=0,j=0;
        int m = mat.size();
        int n = mat[i].size();
        vector<vector<int>>v(m, vector<int>(n));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                v[i][(j+n-(k%n))%n] = mat[i][j];
            }
        }
        return v;
    }
};
