class Solution {
  public:
    bool isToeplitz(vector<vector<int>>& mat) {
        // code here
        int m = mat.size();
        int n = mat[0].size();

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(mat[i][j]!=mat[i-1][j-1])return false;
            }
        }
        return true;
    }
};
