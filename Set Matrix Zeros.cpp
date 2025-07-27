class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        
        vector<int>rows(n, -1);
        vector<int>cols(m, -1);
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==0){
                    rows[i]=0;
                    cols[j]=0;
                }
            }
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(rows[i]==0 || cols[j]==0){
                    mat[i][j]=0;
                }
            }
        }
        
        return;
    }
};
